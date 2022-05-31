// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> res;
        sort(arr,arr+n);
        
     for(int i=0;i<n-1;i++){
              if(arr[i]==arr[i+1]&& arr[i+1]!=arr[i+2]){

             res.push_back(arr[i]);
             i++;
         }
     }
     if(res.size()==0){
         res.push_back(-1);
     }
     
     return res;// code here
    }
};


// 0,3,1,2

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends