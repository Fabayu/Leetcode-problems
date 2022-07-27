class Solution {
public:
  
    
    

    int maxi=INT_MIN;
    int helper(vector<vector<int>>&grid, int l, int r)
    {
        // Base Case is here
       if(l<0 || l>=grid.size() || r<0 || r>=grid[0].size() || grid[l][r]==0)
           return 0;
        
        //  for back track  stroing by making grid[l][r]=0
        int vis=grid[l][r];
        grid[l][r]=0;
        
        //   all the possible ways traversing  --->>>>> left,--->> right, --->>down , up
        int maxi= vis+max({helper(grid,l-1,r), helper(grid,l+1,r), helper(grid,l, r+1) ,helper(grid,l,r-1)});
        
        //------>>>>> 
        grid[l][r]=vis;
        return maxi;
        //assign value of grid[l][r]=vis for backtracking
       
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int  res=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                // All the  possible max value from each point of the matrix
              res=max(res,helper(grid,i,j) );
            }
        }
        return res;
    }

};