class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
    int s=0;
        int n=nums.size();
        int e=0;
        int prev=0;
            int ans=0;
        while(e<n){
            if(left<=nums[e]&&nums[e]<=right){
                prev=e-s+1;
                ans+=prev;
            }
            else if(left>nums[e]){
                ans+=prev;
                
            }
            else{
                prev=0;
                s=e+1;
                
            }
            e++;
        }
        return ans;
    }
};