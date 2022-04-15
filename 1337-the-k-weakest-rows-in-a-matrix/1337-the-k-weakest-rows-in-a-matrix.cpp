class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      set<pair<int,int > > s;
        vector<int> res;
        for(auto i=0;i<mat.size();i++){
            auto p=accumulate(begin(mat[i]),end(mat[i]),0);
            s.insert({p,i});
            
        }
        for(auto it=begin(s);k>0;k--,it++){
            res.push_back(it->second);
        }
        return res;
    }
};