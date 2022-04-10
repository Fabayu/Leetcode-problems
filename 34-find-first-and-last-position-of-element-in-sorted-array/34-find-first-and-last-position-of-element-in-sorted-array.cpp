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

//  int n=nums.size();
//         int low=0;
//         int high=n-1;
//         while(low>high){
//             int mid=low+(high-low)/2;
//             if(nums[mid]==target){
//                 v.push_back(mid);
//             }
//             if(nums[mid]>target){
//                 high=n-1;
//             }
            
//         }