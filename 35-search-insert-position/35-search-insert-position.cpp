class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int hi=nums.size()-1;
        int lo=0;
      while(lo<=hi){
          int mid=lo+(hi-lo)/2;
          if(t>nums[mid]){
             
                lo=mid+1;
          }
          else{
            hi=mid-1 ;
          }
      }
        return lo;
    }
};