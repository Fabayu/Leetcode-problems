class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        vector<int> vi;
      for(int i=0;i<nums.size();i++){
          if(nums[i]==target){
              v.push_back(i);
              break;
          }
      }
          for(int i=nums.size()-1;i>=0;i--){
              if(nums[i]==target){
                  v.push_back(i);
                  break;
              }
          }
        
   if(v.empty()){
       vi.push_back(-1);
       vi.push_back(-1);
       return vi;
   }
        else{
          return v;  
        }
    }
};
