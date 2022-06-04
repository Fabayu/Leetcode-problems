

class Solution {
    public:
        vector < vector <string> > sol;
        int limit;
        
        vector<string> toChessString(vector<int> arr) 
          {
            string s(arr.size(),'.');
            vector<string> ans(arr.size(),s);
    
            for(int i=0 ; i<arr.size() ; i++)
              ans[i][arr[i]]='Q';
    
              return ans;
          }
    
    
        bool isSafe(vector<int> arr, int r , int c )
         {
            int check;
            for(int row=r-1,ldia=c-1,rdia=c+1 ; row>=0 ; row--,ldia--,rdia++)
            {
                check=arr[row];
    
                if(check==c || check==ldia || check==rdia)
                 return false;
            }
            return true;
         }
    
        void solveNqueen(vector<int> arr , int r , int c)
        {
            if(r==limit)
             sol.push_back(toChessString(arr));
                
            else
             {
                 for(int col=c ; col<limit ; col++)
                 {
                    arr[r]=col;
    
                    if(isSafe(arr,r,col))
                      solveNqueen(arr,r+1,0);
                 }
             }
        }
    
    
        vector<vector<string> > solveNQueens(int n) {
            vector<int> arr(n,0);
            limit=n;
            solveNqueen(arr,0,0);
          
            return sol;
        }
    };