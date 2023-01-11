//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int n) {
        // Code her
        
        sort(arr.begin(),arr.end());
        long long int ans=0;
        int c=arr[0];
       for(int i=1;i<n;i++)
       {
           if(arr[i]<=c)
           {
               c++;
               ans+=(long long)c-(long long)arr[i];
           }
           else
           {
               c=arr[i];
           }
       }
       return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends