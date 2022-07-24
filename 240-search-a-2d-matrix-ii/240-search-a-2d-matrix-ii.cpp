class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0;
        int c=matrix[0].size()-1;
        while(r<matrix.size()&&c>=0){
            if(matrix[r][c]==target)
            {
             return true;  //find target return   
            }        
            else if(matrix[r][c]>target){
               c--;  // discard that col ang get one step back since target is small
            }
            else{
                r++;   // discard row it will not be in this row man!!
            }
        }
            return false;
    }
};