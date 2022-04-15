class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> ok(s.size(), false);
        ok[0] = true;
        for (int head = 0; head < s.size(); head++){
            if (ok[head]){
                for (auto word:wordDict){
                    int tail = head + word.size() -1;
                    if ( tail < s.size() && word == s.substr(head, word.size()) ){
                        if (tail == s.size()-1) return true;
                        else ok[tail+1] = true;
                    }
                }
            }
        }
        return false;
    }
};