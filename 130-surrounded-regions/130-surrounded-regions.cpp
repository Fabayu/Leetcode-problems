



class Solution {
public:
    bool isSafe(int i, int j, int m, int n){
        return (i>=0 && i<m && j>=0 && j<n);
    }
	// the indices are present at the border of the matrix.
    bool isBorder(int i, int j, int m, int n){
        return (i==0 || i==m-1 || j==0 || j==n-1);
    }
    void solve(vector<vector<char>>& board) {
        if(board.size()==0)
            return ;
		
        int m = board.size();
	
        int n = board[0].size();
		//  queue for BFS.
        queue<pair<int,int>> q;
		// dir contains the directions in which the checking is to be done.
        vector<pair<int, int>> dir = {{1,0}, {-1,0}, {0, 1}, {0, -1}};
		//  the border elements as 'O' and converting it into something else.

		// check only the border rows and columns but I have instead traversed the whole matrix. You can surely save up some time here.
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && isBorder(i,j,m,n)){
					
                    board[i][j] = '.';
                    q.push(make_pair(i,j));                    
                }
            }
        }
		// the BFS.
        while(!q.empty()){
            pair<int, int> temp = q.front();
            q.pop();
			// Checking all the directions.
            for(int i=0;i<dir.size();i++){
                int x = temp.first + dir[i].first;
                int y = temp.second + dir[i].second;
				// the (x,y) must be possible within the matrix and it must not be on the border.
                if(isSafe(x,y,m,n) && !isBorder(x,y, m,n) && board[x][y]=='O'){
                    board[x][y]= '.';
                    q.push(make_pair(x,y));
                }
            }
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
		
                if(board[i][j]=='O')
                    board[i][j] = 'X';

				else if(board[i][j]=='.')
                    board[i][j] = 'O';
    }
};