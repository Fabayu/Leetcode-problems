class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

/*
    convert each string to a base / standard pattern and then compare them. Here, we are converting all occurences of first found character to a, second all occurences of second found character to b, then c and so on...

---->> Consider the words "mmnpoq" and "ppqqqz". We can convert these into - "aabcde" and "aabbbc". Since they are not equal, we can say both these words don't match.
Similarly, the words "mnpqrr" and "xyzabb" can be converted into "abcdee" and "abcdee" respectively. Since they are equal, we say that these two words match.
    */
        
        
vector<string> ans;
	string p = normalise(pattern);
	for(auto& w : words) 
		if(p == normalise(w)) ans.push_back(w);
	return ans;
}
string normalise(string w) {
	unordered_map<char, char> mp;
	char c = 'a';
	for(auto ch : w) 
		if(!mp.count(ch)) mp[ch] = c++;
	for(auto& ch : w) ch = mp[ch];
	return w;
}
};