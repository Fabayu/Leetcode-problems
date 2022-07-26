class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //make right array
      vector<int> r(nums.size());
        int prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            r[i]=prod;
            
        }
      vector<int> res(nums.size());  
        prod=1;
        
     for(int i=0;i<nums.size()-1;i++){
         int lp=prod;
         int rp=r[i+1];
         res[i]=lp*rp;
         prod*=nums[i];
         
     }   
        res[nums.size()-1]=prod;
        return res;
        
        
        
        
        
        
    }
};