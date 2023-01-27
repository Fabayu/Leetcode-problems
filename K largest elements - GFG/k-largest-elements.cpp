//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int nums[], int n, int k)
    {
        // code here
        vector<int> v;
         priority_queue<int,vector<int> ,greater<int>> pq;
        int s=0;
        while(s<n)
        {
            pq.push(nums[s]);
            s++;
            if(pq.size()>k){
                pq.pop();
            }

        }
        
        while(!pq.empty()){
            v.emplace(v.begin(),pq.top());
            pq.pop();
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends