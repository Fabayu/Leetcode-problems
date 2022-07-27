
    
    class Solution {
public:
    bool isEqual(string& s, string& t, int subLen){
        int len = t.length();
        for(int i = 0; i < subLen; i++){
            if(s[i] != t[len - subLen + i]){
                return false;
            }
        }
        return true;
    }
        
    string shortestPalindrome(string s) {
        int i, len = s.length();
        const int mod = 1e9 + 7;
        const int index = 26;
        
        string t = s;
        reverse(t.begin(), t.end());
        
        vector<long long> prefixMap(len);
        vector<long long> suffixMap(len);
        
        long long hash = 0;
        for(i = 0; i < len; i++){
            hash *= index;
            hash %= mod;
            hash += s[i];
            hash %= mod;
            prefixMap[i] = hash;
        }
        
        long long mult = 1;
        hash = 0;
        long long next;
        for(i = len - 1; i >= 0; i--){
            next = mult * t[i];
            next %= mod;
            hash += next;
            hash %= mod;
            mult *= index;
            mult %= mod;
            suffixMap[len - 1 - i] = hash;
        }
                
        for(i = len; i >= 1; i--){
            if(prefixMap[i - 1] == suffixMap[i - 1] && isEqual(s, t, i)){
                string rem;
                if(i < len){
                    rem = s.substr(i, len - i);
                }
                
                reverse(rem.begin(), rem.end());
                return rem + s;
            }
        }
        
        return "";
    }
};