// { Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:

    long long int power(int a, long long int b) { 
        if(b==0){
            return 1;
        }
        long long int x=power(a,b/2);
        long long int y=(x*x)%1000000007;
        if(b%2==0){
            return y;
        }
        return (a*y)%1000000007;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 


  // } Driver Code Ends