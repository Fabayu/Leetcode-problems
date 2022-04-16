class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
      return lower_bound(nums.begin(),nums.end(),x)-nums.begin();
    }
};