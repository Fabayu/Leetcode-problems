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
	   int c=0;
	   vector<pair<int,int> > p;
	   
	   for(int i=0;i<nums.size();i++){
	       p.push_back({nums[i],i});
	   }
	   sort(p.begin(),p.end());
	   for(int i=0;i<nums.size();i++){
	       pair<int,int>  p2=p[i];
	       int index=p2.second;
	       int val=p2.first;
	       if(i!=index){
	           swap(p[i],p[index]);
	           c++;
	           i--;
	       }
	   }
	  
	  return c;
	}


// 2 8 5 4
// 2 4 5 8





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