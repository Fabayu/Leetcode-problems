class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>prev(n, 0);
        for(int i = m-1; i>=0; i--){
            vector<int>curr(n, 0);
            for(int j = n-1; j>=0; j--){
                if(i == m-1 || j == n-1){
                    //dp[i][j] = 1;
                    curr[j] = 1;
                }else{
                    // dp[i][j] = dp[i+1][j] + dp[i][j+1];
                    int down = 0, right = 0;
                    if(j<n) right = curr[j+1];
                    if(i<m) down = prev[j];
                    curr[j] = right + down;
                }
            }
            prev = curr;
        }
    // return dp[0][0]; 
        return prev[0];
    }

};