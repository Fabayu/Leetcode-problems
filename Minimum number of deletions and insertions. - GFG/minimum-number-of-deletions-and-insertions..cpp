//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string word1,  string word2) 
	{ 
	    // Your code goes here
	            int a=word1.size();
        int b=word2.size();
       vector<vector<int> > dp(a+1,vector<int>(b+1,0));
        
        for(int i=1;i<a+1;i++){
            for(int j=1;j<b+1;j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return a-dp[a][b]+b-dp[a][b];
        
        
        
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends