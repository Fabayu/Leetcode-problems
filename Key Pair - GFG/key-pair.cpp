//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	
	//set 
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	   sort(arr,arr+n);
	   int s=0;
	   int e=n-1;
	   while(s<e){
	       if(arr[s]+arr[e]==x){
	           return true;
	       }
	       else if(arr[s]+arr[e]<x){
	           s++;
	       }
	       else{
	           e--;
	           
	       }
	   }
	   return false;
	}
};




//set
//  unordered_set<int> s;
// 	    for(int i=0;i<n;i++){
// 	        if(s.find(x-arr[i])!=s.end()){
// 	            return true;
// 	        }
// 	        else{
// 	            s.insert(arr[i]);
	            
// 	        }
// 	    }
// 	   return false;

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends