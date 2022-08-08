class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int maxi = 1;
        int n = size(nums);
        vector<int> dp(n, 1);
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < i; j++) 
                if(nums[i] > nums[j]) 
				    dp[i] = max(dp[i], dp[j] + 1), maxi = max(maxi, dp[i]);
        return maxi;
    }
};