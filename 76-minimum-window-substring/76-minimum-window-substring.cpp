class Solution {
public:
    string minWindow(string s, string p) {
     int n = s.length();
        int start=0,end=INT_MAX;
        unordered_map<char,int> mp;
        for(auto &ele:p){
            mp[ele]++;
        }
        int count = mp.size();
        int i=0,j=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            if(count==0){
                while(count==0){
                    if(end-start>j-i){
                        start=i;
                        end=j;
                    }
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]>0){
                            count++;
                        }
                    }
                    i++;
                }
            }
            j++;
        }
        return end== INT_MAX? "":s.substr(start,end-start+1);

    }
};