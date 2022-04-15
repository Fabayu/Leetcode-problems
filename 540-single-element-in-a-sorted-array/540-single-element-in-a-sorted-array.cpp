class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //xor appriach --->o(n)
        
    int lo=0;
        int hi=nums.size()-2;
        while(lo<=hi){
           int mid=lo+(hi-lo)/2;
           if(nums[mid]==nums[mid^1]){
               lo=mid+1;
               
           }else{
               hi=mid-1;
               
           }
        }
    return nums[lo];
    }
    
};