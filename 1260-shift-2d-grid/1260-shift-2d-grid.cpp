class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    // for(int i=0;i<grid.size();i++){
    //     for(int j=0;i<grid[0].size();j++)
    //     {
    //         grid[i][j+1]=grid[i][j;
    //         grid[i +1][0]=grid[i][n-1];
    //                             grid[0]][0]=grid[m-1][n-1;]
    //     }    } 
    //     return grid[m][n];/
//         int m= grid.size();
// int n= grid[0].size();
// vector<vector>ans(m,vector(n,0));
// for(int i=0;i<m;i++){
// for(int j=0;j<n;j++){
// ans[(i+(j+k)/n)%m][(j+k)%n]=grid[i][j];
// }
// }
// return ans;
           
        int n = grid.size();
        
        int m = grid[0].size();
        
        k = (k % (n * m));
        
        while(k--)
        {
            vector<int> last(n);
            
            for(int i = 0; i < n; i++)
            {
                last[i] = grid[i][m - 1];
            }
            
            for(int i = 0; i < n; i++)
            {
                for(int j = m - 1; j >= 1; j--)
                {
                    grid[i][j] = grid[i][j - 1];
                }
            }
            
            grid[0][0] = last[n - 1];
            
            for(int i = 1; i < n; i++)
            {
                grid[i][0] = last[i - 1];
            }
        }
        
        return grid;
    }
};