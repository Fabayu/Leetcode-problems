class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
 vector<pair<int,int>> vp;
        
        
        for(int i=0;i<nums.size();i++)
        {
            vp.push_back(make_pair(nums[i],i) );
        }
        sort(vp.begin(),vp.end());
        
        for(int i=0;i<vp.size()-1;i++)
        {
            if((vp[i].first==vp[i+1].first) && (abs(vp[i].second-vp[i+1].second)<=k))
                return true;
        }
        return false;
    }
};