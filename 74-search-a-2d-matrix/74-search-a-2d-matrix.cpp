class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int i=0;
        int j=matrix[0].size()-1;
        while(j>=0&&i<matrix.size()){
            if(target==matrix[i][j]){
                return true;
            }
            else if(target<matrix[i][j]){
                j--;
            }
            else{
                i++;
            }
        }       
   return false;
    }
};




// int i=0;
//         int j=matrix[0].size()-1;
//         while(j>=0&&i<matrix.size()){
//             if(target==matrix[i][j]){
//                 return true;
//             }
//             else if(target<matrix[i][j]){
//                 j--;
//             }
//             else{
//                 i++;
//             }
//         }
//    return false;
//     // }

// // sun phle tu intution ye h ki 
// // # make target the end value in any row if 
// // end vale se jada h target then next row me ja tjst is row++
// //     if target is smaleer than end value then j-- that is phle col me aa
    

// //  int rows = matrix.size(),
// // 			cols = matrix[0].size(),
// //             row = 0, col = cols - 1;
			
// //         while (row < rows && col > -1) {
// //             int cur = matrix[row][col];
// //             if (cur == target) return true;
// //             if (target > cur) row++;
// //             else col--;
// //         }
        
// //         return false;