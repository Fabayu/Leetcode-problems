

// //Approach :
// -->>Case of unbounded knapsack with like of subset problem
// --->>steps::
// 1.Initialise dp array with changing values [[[amount and size is changing ]]] 
// 2.Initialise upper box with all 0 if i==0 and then 1 if j==0
//     3.again a for loop then check condition then get maximum ways 
//     Note:: Whenever maximum ways is asked change to "+" 
//         4.Note this is problem of unbounded knapsack//



class Solution {
public:


    int change(int a, vector<int>& coins) {
     int n=coins.size();
     int dp[n+1][a+1];
     for(int i=0;i<n+1;i++){
     for(int j=0;j<a+1;j++){
         if(i==0){
         dp[i][j]=0;
         
         }
         else if(j==0){
         dp[i][j]=1;
         }
     }
     
     
     
     }
     for(int i=1;i<n+1;i++){
     for(int j=1;j<a+1;j++){
     if(coins[i-1]<=j){
     dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
     }
     else{
     dp[i][j]=dp[i-1][j];
     }
     }
     }
     return dp[n][a];
     
     
     
     
    }
};