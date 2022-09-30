
class Solution {
public:
int minSubArrayLen(int s, vector<int>& nums) {
   
    int l=0;
    int r=0;
    int sum=0;
    int len=INT_MAX;
    while(r<nums.size())
    {
        sum+=nums[r];
        r++;
        while(sum>=s){
            len=min(len,r-l);
            sum-=nums[l];
            l++;
            
        }
    }    
      return len==INT_MAX?0:len;
  }
    
    
};


      