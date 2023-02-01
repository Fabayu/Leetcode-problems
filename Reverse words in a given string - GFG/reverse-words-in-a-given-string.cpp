//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        
        
         int j=0;//head
     int n=s.size();
     int q=0;//follower helps in swap
     int p=0;//followa i for filling 
     reverse(s.begin(),s.end());

     while(j<n){
         while(j<n&&s[j]=='.')j++;  //increent with spaces
         while(j<n&&s[j]!='.'){      //just fill the spaces 
             s[p]=s[j];
             j++;
             p++;
         }

         if(q<p){
             reverse(s.begin()+q,s.begin()+p);//reverse agin from l to r
             s[p]='.';
               p++;
             q=p;
           

         }

         j++;

     }
   if(p>0)s.resize(p-1);
   return s;

    }
};



    

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends