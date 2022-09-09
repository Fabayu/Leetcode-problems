

class Solution {
public:
    void solve(int idx,string s,unordered_set<string> &dict,string temp,vector<string> &res)
    {
        if(idx==s.size())
        {
            temp=temp.substr(1);
            res.push_back(temp);
            return;
        }
        for(int i=idx;i<s.size();i++)
        {
            string t=s.substr(idx,i-idx+1);
            if(dict.find(t)!=dict.end())
            {
                solve(i+1,s,dict,temp+" "+t,res);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> res;
        unordered_set<string> dict;
        for(auto x:wordDict)
        {
            dict.insert(x);
        }
        solve(0,s,dict,"",res);
        return res;
    }
};