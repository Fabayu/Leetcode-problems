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
    
    
    

    
    
    
};