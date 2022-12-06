//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
      int dp[1002][1002];
    //Function to return max value that can be put in knapsack of capacity W.
   int knap(int W, int wt[], int val[], int n){
   if(W==0||n==0){
       return 0;
   }
   
   if(dp[W][n]!=-1){
       return dp[W][n];
   }
    if(W>=wt[n-1]){
          return dp[W][n]=max(val[n-1]+knap(W-wt[n-1],wt,val,n-1),knap(W,wt,val,n-1));
      }
      else {
          return dp[W][n]=knap(W,wt,val,n-1);
      }
       
   
    
      
  }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       
      memset(dp,-1,sizeof(dp));
      int x=knap(W,wt,val,n);
      return x;
       
     
       
       
       
       
       
       
    }
};





   //Function to return max value that can be put in knapsack of capacity W.
    
      
   
//   int knap(int W, int wt[], int val[], int n){
   
//     if(W==0||n==0){
//           return 0;
//       }
      
//       if(dp[n][W]!=-1){
//           return dp[n][W];
//       }
//       if(wt[n-1]<=W){
//       dp[n][W]= max(val[n-1]+knap(W-wt[n-1],wt,val,n-1),knap(W,wt,val,n-1));
//       return dp[n][W];
//       }
//       else{
//          dp[n][W]=knap(W,wt,val,n-1);
//          return dp[n][W];
//       }
//   }
//     int knapSack(int W, int wt[], int val[], int n) 
//     { 
//       // Your code here
//       //memoized
//       memset(dp,-1,sizeof(dp));
//       int x=knap(W,wt,val,n);
//       return x;
       
       
       
       
       
       
       
//     }
// };




// int knapSack(int W, int wt[], int val[], int n) 
//     { 
//       // Your code here
//       int dp[n+1][W+1];//depending upon constraint 
//       for(int i=0;i<n+1;i++){//initialsing the table with 0's
//           for(int j=0;j<W+1;j++){
//               if(i==0||j==0){
//                   dp[i][j]=0;//filled 
//               }
//               else if(wt[i-1]<=j){//i==n  and j==W
//                   dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);//max of including not includind 
//               }
//               else{
//                   dp[i][j]=dp[i-1][j];// not including 
//               }
//           }
//       }
//       return dp[n][W];





















//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends