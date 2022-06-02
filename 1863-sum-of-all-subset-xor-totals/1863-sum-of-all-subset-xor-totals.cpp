class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
    
      int res=0;
        int total;
        for(int i=1;i<(1<<nums.size());i++){
            total=0;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)){
                     total^=nums[j];
            }
            }
            res+=total;
        }
return res;
        
        
        
    }
};
// 1 3  
    
// 0 0
// 0 1
// 1 0
// 1 1
    
    
    
    
    
    
    
    
    
    
    
    
    
  
