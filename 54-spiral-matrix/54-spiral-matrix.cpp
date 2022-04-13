class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        if(matrix.size()==0){
            return res;
        }
        
        
        int rowbeg=0;
        int rowend=matrix.size()-1;
        int colbeg=0;
        int colend=matrix[0].size()-1;
        while(rowbeg<=rowend&&colbeg<=colend){
            for(int i=colbeg;i<=colend;i++){
              res.push_back(matrix[rowbeg][i]);
                
            }
          rowbeg++;
            for(int i=rowbeg;i<=rowend;i++){
                res.push_back(matrix[i][colend]);
                
            }
            colend--;
            if(rowbeg<=rowend){
                for(int i=colend;i>=colbeg;i--){
                    res.push_back(matrix[rowend][i]);
                    
                }
                
            }
            rowend--;
                
                if(colbeg<=colend)
                {
                    for(int i=rowend;i>=rowbeg;i--){
                        res.push_back(matrix[i][colbeg]);
                    }
                } 
            
            colbeg++;
            }
        return res;
    }
};