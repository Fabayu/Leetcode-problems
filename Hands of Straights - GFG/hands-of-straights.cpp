//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int W, vector<int> &hand) {
        // code here
        
        
        
    if(hand.size()%W!=0)
        return false;
    
    unordered_map<int,int> map;
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(auto x:hand){
        map[x]++;
    }
    
    for(auto p:map){
        pq.push(p.first);
    }
    
    while(!pq.empty()){
        int val=pq.top();
        // pq.pop();
        for(int i=0;i<W ;i++){
            if(map.find(i+val)==map.end()){
                return false;
        }
            else{
            map[i+val]--;
            }
        

            if(map[i+val]==0)
            
                pq.pop();
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
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends