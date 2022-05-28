class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,totalsum=0;
        int n=nums.size();
   for(int i=0;i<n;i++){
       sum+=nums[i];
   }
        int total=(n*(n+1))/2;
        return total-sum;
   }
};



