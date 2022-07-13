class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int tortoise=nums[0];
      int rabbit=nums[0];
      do{
          rabbit=nums[nums[rabbit]];
          tortoise=nums[tortoise];
          
      }  while(rabbit!=tortoise);
        rabbit=nums[0];
        while(rabbit!=tortoise){
            tortoise=nums[tortoise];
            rabbit=nums[rabbit];
        }
        return rabbit;
    }
};