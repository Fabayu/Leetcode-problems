

class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>> mp;
        for(auto i:paths)
        {
            string loc=i;
            string dir="";
            int x=0;
            for(;x<loc.size();x++)
            {
                if(loc[x]==' ')
                    break;
                dir+=loc[x];
            }
            dir+='/';
            string content="";
            string file="";
            loc+=" ";
            bool bracket=false;
            for(;x<loc.size();x++)
            {
                if(loc[x]==' ')
                {
                    if(content!="")
                    mp[content].push_back(dir+file);
                    file="";
                    content="";
                    continue;
                }
                else if(bracket)
                {
                    if(loc[x]==')')
                    {
                        bracket=false;
                        continue;
                    }
                    content+=loc[x];
                }
                else
                {
                    if(loc[x]=='(')
                    {
                        bracket=true;
                        continue;
                    }
                    file+=loc[x];
                }
            }
        }
        vector<vector<string>> ans;
        for(auto i:mp)
        {
            if((i.second).size()>1)
            ans.push_back(i.second);
        }
        return ans;
    }
};