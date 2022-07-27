class Solution {
public:
   
    
//dp[0][0] = grid[0][0] , b'coz we are initially in this house
//dp[i][j] means minimum rent i need to pay to reach the house [i,j]
//for 0th row , there is only one way to reach any house, and that is by moving to right, therefore ,

    
    
// can reach either from grid[i-1][j]
//or from grid[i][j-1]
//  choose the one with minimum rent
// dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + grid[i][j]



int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m,vector<int>(n,0));
    dp[0][0] = grid[0][0];
    for(int i=1;i<m;i++)
        dp[i][0] = dp[i-1][0] + grid[i][0];
    for(int j=1;j<n;j++)
        dp[0][j] = dp[0][j-1] + grid[0][j];
     for(int i=1;i<m;i++)
//          dp[0][i] = dp[0][i-1] + grid[0][i] (rent paid so far + rent for this house)
// for 0th column, there is only one way to reach any house, and that is by moving down, therefore,
// dp[i][0] = dp[i-1][0] + grid[i][0] (rent paid so far + rent for this house)
// And now for rest of the houses in the grid, say grid[i][j]
         
         for(int j=1;j<n;j++)
             dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + grid[i][j];
        return dp[m-1][n-1];
   
    }
};