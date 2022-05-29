// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends

//  5, 20, 3, 2, 5, 80
    // i          
    // 75
    // 
//   2 3 5  5 78 80
  //  i           j     
/*
75
  78
*/

bool findPair(int arr[], int size, int n){
    //code
   sort(arr,arr+size);
   int i=0;
   int j=1;
   while(i<size&&j<size){
       if((i!=j)&&(arr[j]-arr[i])==n){
           return 1;
       }
       else if(arr[j]-arr[i]<n){
           j++;
       }
       else{
           i++;
       }
   }
   return 0;
}