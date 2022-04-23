class Solution {
public:
    int L;
    int R;
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
      //preix 
        //l>0
        //l=0
        vector<int> v;
        // int pre[arr.size()];

                vector<int> pre(arr.size());
        
        // // // vector<int> pre;
        pre[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            pre[i]=pre[i-1]^arr[i];
        }
        
        for(int i=0;i<queries.size();i++){
             L=queries[i][0];
            R=queries[i][1];
        
        
        if(L==0){
            v.push_back(pre[R]);
        }
        else{
          v.push_back(pre[R]^pre[L-1]);  
        }
        }
        return v;
    }
};