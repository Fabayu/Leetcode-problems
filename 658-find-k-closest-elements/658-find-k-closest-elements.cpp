class Solution {
public:
    
      vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      priority_queue<pair<int,int> > pq;
          vector<int> v;
          for(int i=0;i<arr.size();i++){
              int key=abs(arr[i]-x);
              pq.push({key,arr[i]});
              if(pq.size()>k){
                  pq.pop();
              }
          }
          
          
         for(int i=0;i<k;i++){
             pair<int,int> tp=pq.top()
;             v.push_back(tp.second);
             pq.pop();
         } 
          sort(v.begin(),v.end());
          return v;
    }
    
    
    
            

//         for(int i=0;i<n;i++)
//         {
//             heap.push({abs(x-arr[i]),arr[i]});
//             if(heap.size()>k)
//             {
//                 heap.pop();
//             }
//         }
//         vector<int> sol;
//         while(heap.size()>0)
//         {
//             sol.push_back(heap.top().second);
//             heap.pop();
//         }
//         sort(sol.begin(),sol.end());
//         return sol;
//     }

    
    
    
};