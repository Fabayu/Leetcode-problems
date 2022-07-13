// Appproach 

// Time ---0(N)
// Space---0(1)    
// --->catch element then make elemet;s index refereed negative
// -->>keep dping this will be left with positive numbers they only are actually missing



class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     vector<int> res;
     for(int i=0;i<nums.size();i++){
     int temp=nums[i];
     temp=(temp>0)?temp:-temp;
     if(nums[temp-1]>0){
     nums[temp-1]*=-1;
     }
     }
     for(int i=0;i<nums.size();i++){
     if(nums[i]>0){
     res.push_back(i+1);
     }
     }
     return res;
     
    }
};