
  
    #define ll long long
ll dp[105][25][105];
ll solve(vector<int>& houses,ll index,vector<vector<int>>& cost,ll prev,ll m,ll n,ll target)
{
    if(target<0)              // If target index neg h to
        return INT_MAX;
    if(index == m)      // sare
    {
        if(target == 0)       // If neighbours are same h to.
            return 0;
        return INT_MAX;     // valid?
    }
    if(dp[index][prev][target] != -1)
        return dp[index][prev][target];
    if(houses[index] != 0)       // If house is already coloured.
    {
        return dp[index][prev][target] = solve(houses,index+1,cost,houses[index],m,n,target-(prev!=houses[index]));
    }
    ll ans = INT_MAX;         // nhi krna 
    for(int i=1;i<=n;i++)
    {
        ans = min(ans,cost[index][i-1]+solve(houses,index+1,cost,i,m,n,target-(prev!=i)));
    }
    return dp[index][prev][target] = ans;
}
class Solution {
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
	  // memset dp with -1.
        memset(dp,-1,sizeof(dp));
		// Calculate answer using recursive dp.
        ll ans = solve(houses,0,cost,n+1,m,n,target);
        if(ans == INT_MAX) //  comes out to be INT_MAX
            return -1;
        return ans;
    }

};