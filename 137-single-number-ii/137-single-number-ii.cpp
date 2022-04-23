class Solution {
public:
    int x;
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        unordered_map<int,int> mp;
        for(auto &it:nums){
            mp[it]++;
            
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if((it->second)==1){
                x=it->first;
            }
        }
        
        
        return x;
    }
    
};