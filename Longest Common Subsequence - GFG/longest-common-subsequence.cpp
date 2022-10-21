//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
     int t[1001][1001];
    int lcsi(int m,int n,string t1,string t2){
             if(m==0||n==0){        
            return 0;
        }
   if(t[m][n]!=-1){
       return t[m][n];
   }
    if(t1[m-1]==t2[n-1]){
        return t[m][n]=1+lcsi(m-1,n-1,t1,t2);
    }
    else{
       return  t[m][n]= max(lcsi(m-1,n,t1,t2),lcsi(m,n-1,t1,t2));
    }
    
}
    int lcs(int m, int n, string t1, string t2){
    memset(t,-1,sizeof(t));
    return lcsi(m,n,t1,t2);
}

};





























// //Memoized

// class Solution
// {
//     public:
//      int t[1001][1001];
//     int lcsi(int m,int n,string t1,string t2){
//              if(m==0||n==0){        
//             return 0;
//         }
//   if(t[m][n]!=-1){
//       return t[m][n];
//   }
//     if(t1[m-1]==t2[n-1]){
//         return t[m][n]=1+lcsi(m-1,n-1,t1,t2);
//     }
//     else{
//       return  t[m][n]= max(lcsi(m-1,n,t1,t2),lcsi(m,n-1,t1,t2));
//     }
    
// }
//     int lcs(int m, int n, string t1, string t2){
//     memset(t,-1,sizeof(t));
//     return lcsi(m,n,t1,t2);
// }
// };

//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends