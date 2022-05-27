// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
       int in[21], out[21];
       memset(in, -1, 21 << 2);
       memset(out, -1, 21 << 2);
       for(int i = 0; i < p; i++)
           out[a[i]] = in[b[i]] = i;
       
       vector<vector<int>> res;
       for(int i = 1; i <= 20; i++)
           if(out[i] != -1 && in[i] == -1)
           {
               int mn = 1000;
               int x = i;
               while(out[x] != -1)
               {
                   mn = min(mn, d[out[x]]);
                   x = b[out[x]];
               }
               res.push_back({i, x, mn});
           }
       return res;  // code here
    }
};


// { Driver Code Starts.
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}  // } Driver Code Ends