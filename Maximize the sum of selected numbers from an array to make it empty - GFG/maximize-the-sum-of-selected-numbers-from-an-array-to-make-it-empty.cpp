//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends

class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
        
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){

            mp[a[i]]++;

        }

        sort(a,a+n);

        int ans=0;

        while(n--){

            int top=a[n];

            if(mp[top]>0){

                ans+=top;

                mp[top]--;

                mp[top-1]--;

            }

        }

        return ans;

    }


    

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends