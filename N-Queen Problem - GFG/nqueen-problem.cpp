//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:



void queen(vector<vector<int>> &res, vector<int> &b,vector<int> &lr, vector<int> &ld,

                vector<int> &ud,int n,int col){

        if(col==n){

            res.push_back(b);

            return ;

        }

        for(int r=0;r<n;r++){

            if(lr[r]==0 && ld[r+col]==0 && ud[n-1+col-r]==0){

                b[r]=col+1;

                lr[r]=1;

                ld[r+col]=1;

                ud[n-1+col-r]=1;

                queen(res,b,lr,ld,ud,n,col+1);

                lr[r]=0;

                ld[r+col]=0;

                ud[n-1+col-r]=0;

            }

        }

    }

    
    
    
    


    
    
    
    
    
    

    vector<vector<int>> nQueen(int n) {

        // code here

        vector<vector<int>> res;

        vector<int> b(n,0);

        vector<int> lr(n,0),ld(2*n-1,0),ud(2*n-1,0);

        queen(res,b,lr,ld,ud,n,0);

        sort(res.begin(),res.end());

        return res;

    }
   
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends