// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      
      unordered_map<int,int> umap;
      int max = INT_MIN;
      int min = INT_MAX;
      for(int i=0;i<N;i++){
          if(arr[i]>max){
              max = arr[i];
          }
          if(arr[i]<min){
              min = arr[i];
          }
          umap[arr[i]]++;
      }
      int num = min,count=0,maxCount=0;
      
      while(num<=max){
         if(umap[num++]){
             count++;
         }
         else{
             if(count>maxCount){
                 maxCount = count;
             }
             count = 0;
         }
      }
      if(count>maxCount){
          maxCount = count;
      }
      return maxCount;
      
      
      
      
      
      
      
      
      //Your code here
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends