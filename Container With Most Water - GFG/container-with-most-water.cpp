// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++

long long maxArea(long long height[],int n )
{
    // Your code goes here
    
    int left=0;
   int right=n -1;
        int maxi=0;
   while(left<right){
       int w=right-left;
       int h=min(height[left],height[right]);
       int area=w*h;
       maxi=max(area,maxi);
       if(height[left]<height[right]){
           left++;
       }
       else if(height[left]>height[right]){
          right--; 
       }
       else{
           right--;
           left++;
       }
       
       
   }     
        return maxi;
    
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends