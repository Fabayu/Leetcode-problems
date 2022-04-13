class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>> res(n,vector<int> (n));
        if(n==0){
            return res;
        }
        
          int count=1;
        int rowbeg=0;
        int rowend=n-1;
        int colbeg=0;
        int colend=n-1;
        while(rowbeg<=rowend&&colbeg<=colend){
            for(int i=colbeg;i<=colend;i++){
              res[rowbeg][i]=(count);
                count++;
                
            }
          rowbeg++;
            for(int i=rowbeg;i<=rowend;i++){
                res[i][colend]=(count);
                count++;
                
            }
            colend--;
            if(rowbeg<=rowend){
                for(int i=colend;i>=colbeg;i--){
                    res[rowend][i]=(count);
                    count++;
                }
                
            }
            rowend--;
                
                if(colbeg<=colend)
                {
                    for(int i=rowend;i>=rowbeg;i--){
                        res[i][colbeg]=(count);
                        count++;
                    }
                } 
            
            colbeg++;
            }
        return res;  
    }
};