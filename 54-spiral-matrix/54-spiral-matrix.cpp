class Solution {
public:/*
[1,2,3]
[4,5,6]
[7,8,9]


[1,1,1]
[0,0,1]
[0,0,1]
*/
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
     int i=0;
        int j=0;
        int v1=0;
        int v2=0;
        int r=matrix.size();
        int c=matrix[0].size();
        int vis[r][c];
        memset(vis,0,sizeof(vis));
        int count=0;
        while(i>=0&&j>=0&&i<r&&j<c){
         //   cout<<count<<" ";
          //  count++;
            v2=1;
            while(i>=0&&j>=0&&i<r&&j<c){
                res.push_back(matrix[i][j]);
                cout<<matrix[i][j]<<" ";
                vis[i][j]=1;
               i= i+v1;
               j= j+v2;
                 if(i>=0&&j>=0&&i<r&&j<c&&vis[i][j]==1)break;
            }
             if(res.size()==r*c)break;
            j=j-1;
            i=i+1;
            v1=1;
            v2=0;
            while(i>=0&&j>=0&&i<r&&j<c){
                 res.push_back(matrix[i][j]);
                 cout<<matrix[i][j]<<" ";
                vis[i][j]=1;
                i= i+v1;
               j= j+v2;  
                if(i>=0&&j>=0&&i<r&&j<c&&vis[i][j]==1)break;
            }
             if(res.size()==r*c)break;
            i=i-1;
            j=j-1;
            v1=0;
            v2=-1;
             while(i>=0&&j>=0&&i<r&&j<c){
                  res.push_back(matrix[i][j]);
                  cout<<matrix[i][j]<<" ";
                 vis[i][j]=1;
                i= i+v1;
               j= j+v2;  
                 if(i>=0&&j>=0&&i<r&&j<c&&vis[i][j]==1)break;
            }
             if(res.size()==r*c)break;
            j=j+1;
            i=i-1;
            v1=-1;
            v2=0;
             while(i>=0&&j>=0&&i<r&&j<c){
                  res.push_back(matrix[i][j]);
                  cout<<matrix[i][j]<<" ";
                 vis[i][j]=1;
                i= i+v1;
               j= j+v2;  
                 if(i>=0&&j>=0&&i<r&&j<c&&vis[i][j]==1)break;
            }
            i=i+1;
            j=j+1;
            v1=0;
            
            if(res.size()==r*c)break;
        }
        return res;
    }
};

















//     colmin-->           --<colmax 
    
// rowmin!    
        
        
// rowmax^        