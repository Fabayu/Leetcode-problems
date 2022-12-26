// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
      
    //overlap prevend>=currstart  
    //no overlap prevstart 
      
      
      int n=intervals.size();
      vector<vector<int>> ans;
      sort(intervals.begin(),intervals.end());
      
      
      for(int i=0;i<n;i++){
          
          
          
          if(ans.empty()){
              ans.push_back(intervals[i]);
              
          }
          else{
            vector<int> &v=ans.back();
            int last_ele=v[1];
            if(last_ele>=intervals[i][0]){
                v[1]=max(last_ele,intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
          }
          
      }
      return ans;
      
         // Code here
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends