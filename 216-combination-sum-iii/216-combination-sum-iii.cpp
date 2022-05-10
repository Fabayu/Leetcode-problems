class Solution {
public:
    
      vector<vector<int>> ans ;

void helper(int k,int n,vector<int> curr,int num){
    if(k == 0 && n == 0)ans.push_back(curr) ;

    for(int i=num ; i<=9 ;i++){
        curr.push_back(i) ;
        helper(k-1,n-i,curr,i+1);
        curr.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> curr ;
    helper(k,n,curr,1) ;
    return ans ;
  
    }
};