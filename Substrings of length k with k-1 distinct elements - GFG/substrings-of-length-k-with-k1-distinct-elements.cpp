//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string arr, int k) {
        // code here
    
        unordered_map<int,int>mpp;

        int count = 0;        

        for(int i=0;i<k;i++)mpp[arr[i]]++;

        if(mpp.size() == k-1)count++;        

        for(int i=k;i<arr.length();i++){

            if(mpp[arr[i-k]] == 1)mpp.erase(arr[i-k]);

            else mpp[arr[i-k]]--;

            mpp[arr[i]]++;

            if(mpp.size() == k-1)count++;        }

        return count;    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends