// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    
bool isSubsetPossible(int arr[], int n, int sum) {
	bool t[n + 1][sum + 1]; // DP - matrix
	
	for (int i = 0; i <= n; i++) { 
		for (int j = 0; j <= sum; j++) { 
			if (i == 0)
				t[i][j] = false;
			if (j == 0) 
				t[i][j] = true;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (arr[i - 1] <= j) 
        
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j]; 
			else  
				t[i][j] = t[i - 1][j];
		}
	}

	return t[n][sum]; 
}

    int equalPartition(int N, int arr[])
    {
     int sum=0;
     for(int i=0;i<N;i++){
         sum+=arr[i];
     }
     if(sum%2!=0) return false;
     else return isSubsetPossible(arr,  N,sum/2);
    }
};

// { Driver Code Starts.

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
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends