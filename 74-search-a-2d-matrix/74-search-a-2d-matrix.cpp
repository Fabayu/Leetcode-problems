class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_size=matrix.size();
        int col_size=matrix[0].size();
        int i=0;
        int j=col_size-1;
        while(i < row_size &&j>-1){
            int cur=matrix[i][j];
            if(target==cur)return true;
            if(target>cur)i++;
            else j--;
        }
        return false;
    
    }
};

// sun phle tu intution ye h ki 
// # make target the end value in any row if 
// end vale se jada h target then next row me ja tjst is row++
//     if target is smaleer than end value then j-- that is phle col me aa
    

//  int rows = matrix.size(),
// 			cols = matrix[0].size(),
//             row = 0, col = cols - 1;
			
//         while (row < rows && col > -1) {
//             int cur = matrix[row][col];
//             if (cur == target) return true;
//             if (target > cur) row++;
//             else col--;
//         }
        
//         return false;