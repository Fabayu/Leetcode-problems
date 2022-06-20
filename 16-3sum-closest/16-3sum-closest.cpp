class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       
         sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums[nums.size()-1];
        for(int i=0;i<nums.size()-2;i++){
           
            int s=i+1;
            int e=nums.size()-1;
            while(s<e){
                int curr_sum=nums[i]+nums[s]+nums[e];
                if(curr_sum<target){
                    
                    

                
                    s++;
                    
                }
    
                
                else{
                     e--;
                }
                
                if(abs(curr_sum-target)<abs(res-target)){
                    res=curr_sum;
                }
            
           
            }
                  
                
            }
            
        return res;
        

        
        
        
        
        
        
    }
};