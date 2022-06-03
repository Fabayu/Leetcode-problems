class NumMatrix {
public:
    vector<vector<int>>  sum;
    NumMatrix(vector<vector<int>>& matrix) {
    int n=matrix.size();   
    int m=matrix[0].size();
    sum=vector<vector<int>>(n+1,vector<int>(m+1));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                sum[i][j]=matrix[i-1][j-1]+sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1];
                                

            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        r1++,c1++,c2++,r2++;
    return sum[r2][c2]-sum[r2][c1-1]-sum[r1-1][c2]+sum[r1-1][c1-1];   
               

    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */