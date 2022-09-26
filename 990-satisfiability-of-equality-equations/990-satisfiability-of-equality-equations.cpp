

class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        vector<int> dp(26);
        
        for(int i = 0; i < 26; i++){
            dp[i] = i;
        }
        
        vector<string> ne;
        
        for(string &s : equations){
            if(s[1] == '!'){
                ne.push_back(s);
                continue;
            }
            
            int right = dp[s[3] - 'a'];
            int left = dp[s[0] - 'a'];
            
            if(right == left)
                continue;
            
            for(int i = 0; i < 26; i++){
                if(dp[i] == left)
                    dp[i] = right;
            }
        }
        
        for(string &s : ne){
            if(dp[s[0] - 'a'] == dp[s[3] - 'a'])
                return false;
        }
        
        return true;
    }
};