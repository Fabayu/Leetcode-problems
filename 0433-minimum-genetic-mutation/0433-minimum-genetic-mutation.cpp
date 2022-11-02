




class Solution {

public:
int minMutation(string start, string end, vector<string>& bank) {


    unordered_set<string> dict(bank.begin(), bank.end());
    unordered_map<string, int> mp;
    queue<string> que;
    que.push(start);
    mp[start] = 0; // for wordLadder, initial value is '1'
    while (!que.empty()) {
        auto curr = que.front();
        que.pop();
        
        string nextWord(curr);
        for (char& c : nextWord) {
            char c1 = c;
            for( c = 'A'; c <= 'Z'; ++c) {  // for wordLadder, iterator lowercase 'a' - 'z'
                if (dict.count(nextWord) == 0)
                    continue;
                
                if (nextWord == end)
                    return mp[curr] + 1;
                
                if (mp.count(nextWord) == 0) {
                    mp[nextWord] = mp[curr] + 1;
                    que.push(nextWord);
                }
            }
            c = c1;
        }
    }
    return -1; // for wordLadder not found return '0'
}
};