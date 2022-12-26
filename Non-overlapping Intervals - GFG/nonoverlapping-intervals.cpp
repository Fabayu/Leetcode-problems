//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(int N, vector<vector<int>> &l) {
        // code here
        
        
        // Case 1:-
// ------------------   -----------------
// |   Interval 1   |   |   Interval 2  |
// ------------------   -----------------










//Group-1


//Case 2:-
// ------------------
// |   Interval 1   |
// ------------------
//            ------------------
//            |    Interval 2  |
//            ------------------


                                                   //Case 3:-
                            //  --------------------
                            //  |    Interval 1    |
                            //  --------------------
                           //     --------------
                           //     | Interval 2 |
                           //     --------------


   sort(l.begin(),l.end());
   
   
   int ans=0;
   int prev=0;
   for(int curr=1;curr<l.size();curr++){
       if(l[curr][0]<l[prev][1]){
           ans++;
           if(l[curr][1]<=l[prev][1]){
               prev=curr;
           }
       }
       
       else{
           
           prev=curr;
       }
   }
   
return ans;













    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(N, intervals) << endl;
    }
    return 0;
}
// } Driver Code Ends