// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.

 


       
       long long  merge(long long arr[], long long s,long long e)
   {
   
       long long mid = s+(e-s)/2;
       long long ans =0;
       long long l1 = mid-s+1;
       long long l2 = e-mid;
       long long left[l1];
       long long right[l2];
       long long mainIndex = s;
       for(long long i=0;i<l1; i++)
       left[i]= arr[mainIndex++];
       mainIndex = mid+1;
       for(long long i=0; i<l2; i++)
       right[i]= arr[mainIndex++];
       long long index1 =0;
       long long index2 =0;
       mainIndex =s;
       while(index1 < l1 && index2 < l2)
       {
           if(left[index1] > right[index2])
           {
               ans += (l1-index1);
               arr[mainIndex++]= right[index2++];
           }
           else
           arr[mainIndex++] = left[index1++];
       }
       while(index1 < l1)
       arr[mainIndex++]=left[index1++];
       while(index2 < l2)
       arr[mainIndex++] = right[index2++];
       return ans;
   }
   long long mergeSort(long long arr[], long long s, long long e)
   {
   if(s >= e)
   return 0;
   
   long long mid = s+(e-s)/2;
   long long ans = mergeSort(arr,s,mid);
   ans += mergeSort(arr,mid+1,e);
   ans += merge(arr,s,e);
   return ans;
   }
   long long int inversionCount(long long arr[], long long n)
   {
    return mergeSort(arr,0,n-1);   
   
     
       
       
       
       
        // Your Code Here
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends