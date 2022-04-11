
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len= 0;
        
        int curr = 0;
        int st = 0;
        string str;
        unordered_map<char,int> mp;
        for(int l = 0;l<s.size();l++)
        {
            mp[s[l]]++;
            
            if(mp[s[l]] > 1)
            {
                while(st<l and st<s.size())
                {
                    mp[s[st]]--;
                    if(s[st] == s[l])
                    {
                        st++;
                        break;
                    }
                    
                    st++;

                }
            }else{
                len = max(len,(l-st+1));
            }
            
        }
        
        return len;
    }
};
