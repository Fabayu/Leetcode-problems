class Solution {
public:
    //max heap
    int findKthLargest(vector<int>& n, int k) {
     priority_queue<int> pq(n.begin(),n.end());
        for(int i=1;i<k;i++){
            pq.pop();
        }
        
        return pq.top();
    }
};