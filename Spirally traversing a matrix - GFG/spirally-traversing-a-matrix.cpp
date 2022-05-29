// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
     vector<int> ans;
    int left=0; int top=0;
    int right=c-1; int bottom=r-1;
    while(1) {
        // top
        for (int i=left; i<=right; i++)
        	ans.push_back(matrix[top][i]);
        top++; if (top>bottom) break;
        //right
        for (int j=top; j<=bottom; j++)
        	ans.push_back(matrix[j][right]);
        right--; if (left>right) break;
        //bottom
        for (int i=right; i>=left; i--)
        	ans.push_back(matrix[bottom][i]);
        bottom--; if (top>bottom) break;
        //left
        for (int j=bottom; j>=top; j--)
        	ans.push_back(matrix[j][left]);
        left++; if (left>right) break;
    }
    return ans;
   // code here 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends