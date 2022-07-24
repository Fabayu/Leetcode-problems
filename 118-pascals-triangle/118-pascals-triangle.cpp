class Solution {
public:
    vector<vector<int>> generate(int numrows) {
      
        
         vector<vector<int>>ans;  
    for(int i=1;i<=numrows;i++){
       vector<int>row;   
        int val = 1;  
        for(int j=1;j<=i;j++){
            row.push_back(val);
            val= val *(i-j)/j;  
        }
        
        ans.push_back(row); 
    }
    return ans;
    }
};