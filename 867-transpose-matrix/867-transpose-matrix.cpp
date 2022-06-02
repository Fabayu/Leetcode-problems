class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      int row=matrix.size();
       
        int col=matrix[0].size();
         vector<vector<int>> res(col,vector<int> (row,0) );
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res[j][i]=matrix[i][j];

            }
        }
        return res;
        
    }
};

// 1,2,3]
// [4,5,6]
// [7,8,9]

