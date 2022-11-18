class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
     unordered_map<int,bool> mp;
        for(auto it:nums){
            mp[it]=true;
        }
        for(auto it:nums){
            if(mp.find(it-1)!=mp.end()){
                mp[it]=false;
                
            }
        }
        int l=0;
        int sp=0;
        for(auto it:nums){
            if(mp[it]==true){
                int tl=1;
                int tsp=it;
                while(mp.find(it+tl)!=mp.end()){
                    tl++;
                }
               l=max(tl,l);
                sp=tsp;
                
                
            }
        }
        return l;
        
        
        
    }
};