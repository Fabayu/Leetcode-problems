class Solution {
public:
    int triangleNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int l;
        int r;
        int ans=0;
        for(int i=2;i<nums.size();i++){
           l=0, r=i-1;
            while(l<r){
            if(nums[i]<nums[l]+nums[r]){
                ans+=(r-l);
                r--;
            }
            else{
                l++;
            }
            }
        }
        return ans;
    }
};