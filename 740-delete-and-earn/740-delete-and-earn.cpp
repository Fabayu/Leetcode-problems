class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
    vector<int> dp(10001,0);
    vector<int>  freq(100001,0);
    for(int i:nums)freq[i]++;
        dp[1]=freq[1];
        for(int i=2;i<10001;i++){
            dp[i]=max(dp[i-2]+i*freq[i],dp[i-1]);
        }
        return dp[10000];
    }
};