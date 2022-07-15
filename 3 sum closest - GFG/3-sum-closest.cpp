// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum( int A[], int N, int X)
    {
      
       
       
       sort(A, A + N);
        int ans = INT_MAX; 
        for(int i = 0; i < N - 2; i++){
            int j = i + 1, k = N - 1, newTarget = X - A[i];
            while(j < k){
                int sum = A[j] + A[k];
                if(abs(newTarget - sum) < abs(ans)){
                    ans = newTarget - sum;
                }
                else if(abs(newTarget - sum) == abs(ans)){
                    if(newTarget - sum < 0){
                        ans = newTarget - sum;
                    }
                }
                if(sum > newTarget){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return X - ans;
  // code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}  // } Driver Code Ends