//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int dp[501][501];

int solve(int arr[],int i,int j,int N){
    if(i>=j)return 0;
    if(dp[i][j]!=-1)
    {
        
        return dp[i][j];
        
    }
    int mini=INT_MAX;
    
    for(int k=i;k<=j-1;k++){
        int temp=solve(arr,i,k,N)+solve(arr,k+1,j,N)+arr[i-1]*arr[j]*arr[k];
        mini=min(temp,mini);
        
    }
    return dp[i][j]=mini;
}
int matrixMultiplication(int N, int arr[]){
    memset(dp,-1,sizeof(dp));
    int i=1;
    

return solve(arr,i,N-1,N);

}
};








//  int mini=INT_MAX;
//       if(i>=j){
//           return 0;
//       }
//       if(dp[i][j]!=-1){
//               return dp[i][j];
//           }
      
//       for(int k=i;k<=j-1;k++){
          
//           int temp=solve(arr,n,i,k)+solve(arr,n,k+1,j)+arr[i-1]*arr[j]*arr[k];
//           mini=min(temp,mini);
//           dp[i][j]=mini;
//       }
//       return dp[i][j];
      
//   }
//     int matrixMultiplication(int N, int arr[])
//     {
//         // code here
        
//         int n=N;
//       memset(dp,-1,sizeof(dp));
//         int i=1;
//         int j=n-1;
//         return solve(arr,n,i,n-1);
//     }

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends