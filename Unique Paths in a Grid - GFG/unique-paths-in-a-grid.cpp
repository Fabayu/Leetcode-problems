//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   
    int uniquePaths(int n, int m, vector<vector<int>> &g) {
        if(g[0][0]==0) return 0;
        int me=1e9+7;
        vector<vector<int>> dp(n+5, vector<int>(m+5));
        
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(i==1 && j==1) {
                    dp[i][j] = 1;
                }
                else if(g[i-1][j-1]!=0) {
                    dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % me;
                }
            }
        }
        return dp[n][m];
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends