class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int,int> mp;
        int ans=0;
        for(auto it:nums){
            mp[it]++;
        }
     for(auto it:mp){   
    if(it.second>nums.size()/2)
        {
            ans=it.first;
            
        }
    }
    
    return ans;

    }     
       
};