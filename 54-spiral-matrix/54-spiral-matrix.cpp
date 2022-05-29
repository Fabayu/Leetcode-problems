class Solution {
public:/*
*/
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.size()==0) return res;
        int minrow=0;
         
        
        int maxrow=matrix.size()-1;
        int maxcol=matrix[0].size()-1;
        int mincol=0;
        while(minrow<=maxrow&&mincol<=maxcol){
           
            for(int i=mincol;i<=maxcol;i++){
                res.push_back(matrix[minrow][i]);
                
            }
            minrow++;
            
            
            for(int i=minrow;i<=maxrow;i++){
                res.push_back(matrix[i][maxcol]);
            }
            maxcol--;
            
            if(minrow<=maxrow){
                for(int i=maxcol;i>=mincol;i--){
                    res.push_back(matrix[maxrow][i]);
                }
            }
                maxrow--;
                
                if(mincol<=maxcol){
                    for(int i=maxrow;i>=minrow;i--){
                        res.push_back(matrix[i][mincol]);
                    }
                }
                            
            mincol++;
            }
            
        
        return res;
    }
};

















//     colmin-->           --<colmax 
    
// rowmin!    
        
        
// rowmax^        