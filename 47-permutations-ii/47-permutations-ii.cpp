class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         vector<vector<int>> ans;
         perm(0,ans,nums);
        return ans;
    }
    
    void perm(int curr, vector<vector<int>>& ans, vector<int> nums)
    {
        if(curr==nums.size())
        {
            ans.push_back(nums);
        }
        else
        {
            for(int i=curr;i<nums.size();i++)
            {
              if(i==curr || nums[i]!=nums[curr])
               {
                swap(nums[i],nums[curr]);
                perm(curr+1,ans,nums);
               }
            }
        } 
    }
};
