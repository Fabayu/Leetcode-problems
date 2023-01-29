//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& nums, int target) {
        // Code here
        
        int i=0, j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if (nums[mid]==target){
                return true;
                
            }
            if((nums[i]==nums[mid]) && (nums[j]==nums[mid])){
                i++; j--;
            }
            else if(nums[i]<=nums[mid]){
                if((nums[i]<=target) && (nums[mid]>target)){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
            else{
                if((nums[mid]<target) && (nums[j]>=target)){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends