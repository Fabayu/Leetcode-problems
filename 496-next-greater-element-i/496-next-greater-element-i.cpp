class Solution {
public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//      vector<int> res;
// 	  stack<int> s;
// 	  for(int i=n-1;i>=0;i++){
// 	      if(s.size()==0){
// 	          res.push_back(-1);
// 	      }
// 	      else if(s.size()>0&&s.top()>arr[i]){
// 	          res.push_back(s.top());
	          
// 	      }
// 	      else if(s.size()>0&&s.top()<arr[i]){
// 	          while(s.size()>0&&s.top()<arr[i]){
// 	              s.pop();
// 	          }
// 	          if(s.size()==0){
// 	              res.push_back(-1);
// 	          }
// 	          else{
// 	              res.push_back(s.top());
// 	          }
// 	      }
// 	      s.push(arr[i]);
// 	  }
// 	  return res;
	     
// 	  // code here
// 	}   
     vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    
    }
};