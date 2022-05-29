// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


       
       class Solution{   
public:
    int solve(vector<int>A,int index)
    {   
        int count=0;
        
        count+=(upper_bound(A.begin(),A.end(),index)-A.begin());
    
        return count;
        
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here  
        int high=2000;
        int low=1;
        int median=(r*c)/2;
        while(low<=high)
        {
            int cnt=0;
            int mid=(high+low)/2;
            for(int i=0;i<r;i++)
            {
                cnt+=solve(matrix[i],mid);
            }
            if(cnt<=median)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low;
    }
};
       
       
       
       
       
       
       
       
       
       
       
       
    
    
    
    
 





// -->binary search in monitiniv=cally increasing 
// -->constraint 1-->10^9
// -->naive::  iterate thru and pu t in vector and sort and middle index will give median 
// --->TC: (n*m)log(n*m)    Sc:0(N*M)


// ---> optimal ::Binary sesarch  
// ---> in search space 1--> 10^9
// -->  find mid and go rowwise and bianary search in it find how may less than mid 
// --> 
// --->less than mid   newmid==r1+r2+r3
// --->again search rowwise








// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends