// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string s){
     
    int n = s.size();
       
       if(n == 1) return s;
       
       int hash[26];
       memset(hash, -1, sizeof(hash));
       
       for(int i=0; i<n; i++){
           if(hash[s[i] - 'a'] == -1){
               hash[s[i] - 'a'] = i;
           }
       }
       int idx1 = -1, idx2 = -1;
       bool flg = 0;
       
       for(int i=0; i<n; i++){
           int ch = s[i];
           for(int j = 0; j<26; j++){
               if(hash[j] > i){
                   if(j < ch-'a'){
                       idx1 = i;
                       idx2 = hash[j];
                       flg = 1;
                       break;
                   }
               }
           }
           if(flg) break;
       }
       
       if(idx1 == -1 and idx2 == -1) return s;
       
       char ch1 = s[idx1];
       char ch2 = s[idx2];
       
       
       for(int i=0; i<n; i++){
           if(s[i] == ch1) s[i] = ch2;
           else if(s[i] == ch2) s[i] = ch1;
       }
       
       return s;
   
   }


};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends