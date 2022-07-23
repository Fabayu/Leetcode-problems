class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int i=0;
        int j=nums.size()-1;
        vector<int> res(nums.size());
        int index=nums.size()-1;
        while(i<=j){
            int val1=nums[i]*nums[i];
            int val2=nums[j]*nums[j];
            if(val1>val2)     {      
           res[index]=val1;
             i++;
            }
                else{
res[index]=val2;
                    j--;
                }
            index--;
               }
        
        

        return res;
    }
};
    
    
    
    
    
    
//           for(int i=0;i<nums.size();i++){
//           nums[i]=nums[i]*nums[i];
          
//       }
//         sort(nums.begin(),nums.end());
//         return nums;
