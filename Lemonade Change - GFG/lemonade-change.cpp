//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int f=0;
        int t=0;
        for(auto i:bills){
            if(i==5){
            f++;
            }
            else if(i==10){
             if(f==0)return false;
             f--;
             t++;
            }
            else{
                 if(f>0&&t>0){
                f--;
                t--;
                }
                else if(f>=3){
                f-=3;
                }
                
                else{
                    return false;
                }
            }
        }
        return true;
    
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends