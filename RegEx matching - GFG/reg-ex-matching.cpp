// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int isPatternPresent(string s, string p) {
        // code here
         // code here
       bool beg=false;
       bool end=false;
       for(int i=0;i<p.size();i++){
           if(p[i]=='^')
               beg=true;
           if(p[i]=='$')
               end=true;
       }
       if(beg){
           return p.substr(1,p.size()-1)==s.substr(0,p.size()-1);
       }
           
       if(end){
           return p.substr(0,p.size()-1)==s.substr(s.size()-(p.size()-1),s.size());
       }
           
       int window=p.size();
       for(int i=0;i+window-1<s.size();i++){
           if(p==s.substr(i,window)){
               return 1;
           }
       }
       return 0;

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string P,S;

        cin>>P;
        cin>>S;

        Solution ob;
        cout << ob.isPatternPresent(S,P) << endl;
    }
    return 0;
}  // } Driver Code Ends