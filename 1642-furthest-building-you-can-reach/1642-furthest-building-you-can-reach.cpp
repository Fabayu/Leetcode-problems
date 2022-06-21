class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
     priority_queue<int,vector<int> ,greater<int>> pq;
     for(int i=0;i<heights.size()-1;i++){
         int diff=heights[i+1]-heights[i];;
         
         if(diff>0){
          pq.push(diff);   
         }
         if(pq.size()>ladders){
             bricks-=pq.top();
             pq.pop();
         }
        if(bricks<0){
           return i; 
        }
     }   
     return heights.size()-1;   
    }
};

// 4,2,7,6,9,14,12

// priority_queue<int> pq;
//         for (int i = 0; i < A.size() - 1; i++) {
//             int d = A[i + 1] - A[i];
//             if (d > 0)
//                 pq.push(-d);
//             if (pq.size() > ladders) {
//                 bricks += pq.top();
//                 pq.pop();
//             }
//             if (bricks < 0)
//                 return i;
//         }
//         return A.size() - 1;
//     }