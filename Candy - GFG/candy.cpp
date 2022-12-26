//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        // code here
        
        vector<int> left(ratings.size()+1,1);
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                left[i]=left[i-1]+1;
            }
            else{
                continue;
            }
        }
        
        int right=1;
        for(int j=ratings.size()-2;j>=0;j--){
            if(ratings[j]>ratings[j+1]){
                right++;
                left[j]=max(left[j],right);
            }
            else{
                right=1;
            }
        }
        int sum=0;
        for(int i=0;i<ratings.size();i++){
            sum+=left[i];
        }
        return sum;
    }
};
//       1
// 1 1 1
// 1 2 2 
// 1 1 1
// 1 2 


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends