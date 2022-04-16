// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int nums[], int n) {
	         int l=0;
        int r=n-1;
     while(l<r){
         int mid=l+(r-l)/2;
         if(nums[mid]<nums[mid+1]){
             l=mid+1;
         }
         else{
             r=mid;
             
         }
     }   
        return nums[l];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends