// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
     vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
    //   pair<int,int> p;
    //   vector<int> v;
    //   priority_queue<pair<int,int>> pq;
    //   sort(arr.begin(),arr.end());
    //   // inserted the key value pair in pair
      
    //   // will sort on pair 
         
    //  for(int i=0;i<n;i++){
    //      if(arr[i]!=x){
    //      pq.push({abs(arr[i]-x),arr[i]});
    //      }
    //      if(k<pq.size()){
    //          pq.pop();
    //      }
    //  }
    //  // have minimum key value pairs
    //  for(int i=0;i<k;i++){
    //      v.push_back(pq.top().second);
    //      pq.pop();
    //  }
    //  reverse(v.begin(),v.end());
    //  return v;
      

// ector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        int i=0,j=n-1,l=-1,r=n,mid;
        vector<int>ans;
        while(i<=j){
             mid=i+(j-i)/2;
            if(arr[mid]==x){
                l=mid-1;
                r=mid+1;
                break;
            }
            else if(arr[mid]<x){
                l=max(l,mid);
                i=mid+1;
            }
            else{
                r=min(r,mid);
                j=mid-1;
            }
        }
        while(l>=0&&r<n&&k>0){
            if(arr[l]==x){
                l--;
                continue;
            }
            if(arr[r]==x){
                r++;
                continue;
            }
            if(abs(arr[l]-x)<abs(arr[r]-x)){
                ans.push_back(arr[l]);
                l--;
                k--;
            }
            else{
                ans.push_back(arr[r]);
                r++;
                k--;
            }
        }
        while(k>0&&r<n){
             ans.push_back(arr[r]);
                r++;
                k--;
        }
        while(k>0&&l>=0){
            ans.push_back(arr[l]);
                l--;
                k--;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends