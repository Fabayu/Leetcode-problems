// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
      stack<int>s;
       long long trapWater = 0;
       int largest = arr[0];
       for(int ind=1; ind<n; ind++){
           if(arr[ind]<largest)
               s.push(arr[ind]);
           else{
               while(s.size()){
                   int val = s.top();
                   s.pop();
                   trapWater += largest - val;
               }
               largest = arr[ind];
           }
       }
       
       if(s.size()){
           largest = s.top();
           s.pop();
           while(s.size()){
               int val = s.top();
               s.pop();
               if(val < largest)
                   trapWater += largest-val;
               else
                   largest = val;
           }
       }
       
       return trapWater;  // code here
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends