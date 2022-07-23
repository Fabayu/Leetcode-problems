class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans;
     
         for(int i=0;i<n;i++){
             int cnt=0;
             for(int j=0;j<n;j++){
             
             
             if(boxes[j]=='1'){
              cnt+=abs(i-j);  
                 
             }
             
             } 
             ans.push_back(cnt);
          
     }
        
      return ans;  
    }
};


