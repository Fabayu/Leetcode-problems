class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int current=nums[i];
            if (mp.find(current) != mp.end() && i - mp[current] <= k) {
                return true;
            }
            mp[current] = i;
        }
        return false;
     
    }
};