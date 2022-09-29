class Solution {
public:
    int search(vector<int>& nums, int target) {
      //   int n=nums.size()-1;
      // int lo=0;
      //   int hi=n-1;
      //   while(lo<=hi){
      //       int mid=lo+(hi-lo)/2;
      //       if(t==nums[mid]){
      //           return mid;
      //       }
      //        else if(t>nums[mid]){
      //           lo=mid+1;
      //       }
      //       else{
      //           hi=mid-1;
      //       }
      //   }
      //   return -1;
        
        int low = 0;
        int high = nums.size() - 1;
        
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target) return mid;
            
            else if(target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};
