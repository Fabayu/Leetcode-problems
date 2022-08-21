
//Sorry its copied but i promise i will solve it when i will be back \U0001f91e

class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        vector<int> ans;
        vector<int> output;
        string str = target;
        string aim(target.length(),'*');
        while(str != aim){
            int tmp = remove(str,stamp);
            if(tmp == str.length()) return output;
            ans.push_back(tmp);
        }
        for(int iter=ans.size()-1;iter>=0;--iter) output.push_back(ans[iter]);
        return output;
    }
    int remove(string& str, string stamp){
        for(int iter=0;iter<str.length();++iter){
            int jter=0,tmp=iter;
            bool flag=false;
            while(jter<stamp.length() && tmp<str.length() && (str[tmp]=='*' || str[tmp]==stamp[jter])){
                if(str[tmp]==stamp[jter]) flag=true;
                tmp++;
                jter++;
            }
            if(jter==stamp.length() && flag){
                for(int kter=0;kter<stamp.length();++kter)
                    str[iter+kter]='*';
                return iter;
            }
        }
        return str.length();
    }
};
