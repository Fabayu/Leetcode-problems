// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
    
    
    
    
    // code here
       if(n == 1)
       return "1";
       
       if(n == 2)
       return "11";
       
       string result = lookandsay(n-1);
       string newresult="";
       int counter = 1;

       for(int i = 1;i<result.length();i++)
       {
          if(result[i]!=result[i-1]){
              newresult.push_back('0'+counter);
              newresult.push_back(result[i-1]);
              counter=1;
          }
          else{
              counter++;
          }
          if(i==result.length()-1){
              newresult.push_back('0'+counter);
              newresult.push_back(result[i]);
          }
       }
       
       return newresult;
       
       
   }   
};
        // code here
      


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends