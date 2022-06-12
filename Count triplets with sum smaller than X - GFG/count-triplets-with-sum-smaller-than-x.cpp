// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    
	   int trip_cnt= 0 ;
       sort(arr,arr+n);
       for(int i = 0 ; i < n ; i++)
       {  if(arr[i] < sum)
           { int j  =  i+1 ; int k = n-1;
              while(j < k)
               {if(sum > arr[i] + arr[j] + arr[k])
                  {
                      trip_cnt += (k - j);
                      j++;
                  }
                  else k--;
               }}}
       return trip_cnt;
	    
	    
	    
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends