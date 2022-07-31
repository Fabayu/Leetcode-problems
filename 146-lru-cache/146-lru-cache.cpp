//rhe na rahe hum\U0001f634\U0001f634\U0001f634\U0001f634
 
class LRUCache
{
public:
	LRUCache(int capacity) : cap(capacity)
	{
	}

	int get(int key)
	{
		if ((iter = hashMap.find(key)) != hashMap.end())
		{
			int val = iter->second.first;
			recentList.erase(iter->second.second);
			recentList.push_front(key);
			iter->second.second = recentList.begin();
			return val;
		}
		return -1;
	}

	void put(int key, int value)
	{
		if ((iter = hashMap.find(key)) != hashMap.end())
		{
			iter->second.first = value;
			recentList.erase(iter->second.second);
			recentList.push_front(key);
			iter->second.second = recentList.begin();
		}
		else
		{
			if (hashMap.size() == cap)
			{
				hashMap.erase(recentList.back());
				recentList.pop_back();
			}
			recentList.push_front(key);
			std::pair<int, std::list<int>::iterator> val(value, recentList.begin());
			hashMap.insert(std::pair<int, std::pair<int, std::list<int>::iterator> >(key, val));
		}
	}

private:
	size_t cap;
	std::list<int> recentList;
	std::unordered_map<int, std::pair<int, std::list<int>::iterator> > hashMap;
	std::unordered_map<int, std::pair<int, std::list<int>::iterator> >::iterator iter;
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */