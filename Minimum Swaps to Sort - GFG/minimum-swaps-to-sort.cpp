// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    
	  unordered_map<int,int>m;
	  int n=nums.size();
	  int c=0;
	  
	  
	  for(int i=0;i<n;i++)
	  {
	      m[nums[i]]=i;
	  }
	  
	  
	  
	  sort(nums.begin(),nums.end());
	  for(int j=0;j<n;j++)
	  {
	      while(m[nums[j]]!=j)
	      {
	          c++;
	          swap(nums[j],nums[m[nums[j]]]);
	      }
	  }
	  return c;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends