class Solution {

//      void findCombination(int idx,vector<int>& v,vector<vector<int>>&res,vector<int>&ds,int target){
//         if(idx==v.size())
//         {
//            if(target==0){
//                res.push_back(ds);
//            } 
//             return ;
//         } 
//         if(v[idx]<=target){
//             ds.push_back(v[idx]);
//             findCombination(idx+1,v,res,ds,target-v[idx]);
//             ds.pop_back();
            
//     }
//         findCombination(idx+1,v,res,ds,target);
//     }
    
//     public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int >> res;
//         vector<int> ds;
//      findCombination(0,candidates,res,ds,target); 
//         return res;
//     }
    
     void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds);

    }
  public:
    vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
      vector < vector < int >> ans;
      vector < int > ds;
      findCombination(0, target, candidates, ans, ds);
      return ans;
    }
   
};