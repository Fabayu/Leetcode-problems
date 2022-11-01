


class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        
   int n=grid.size();
        int m=grid[0].size();
        vector<int> v(m);
        for(int j=0;j<m;j++){
            int curr_pos=j;
            int next_pos=-1;
            
            
            for(int i=0;i<n;i++){
                next_pos=curr_pos+grid[i][curr_pos];
                if(next_pos<0||next_pos>=m||grid[i][curr_pos]!=grid[i][next_pos]){
                    curr_pos=-1;
                    break;
                }
                curr_pos=next_pos;
            }
            v[j]=curr_pos;
            
        }
        
        return v;
        
        
    }
};