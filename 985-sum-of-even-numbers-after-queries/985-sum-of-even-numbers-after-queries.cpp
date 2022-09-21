
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& qu) {
        vector<int>ans;
        int sum =0;
        for(int i =0 ; i<nums.size();i++){
            if(nums[i]%2==0){
            sum+= nums[i];
            }
        }
        for(int i =0 ; i<qu.size();i++){
            int a = qu[i][0];
            int b = qu[i][1];
                if(nums[b]%2==0){
                 sum-=nums[b];
                }
                 int k = nums[b]+a;
                 nums[b] =k;
                 if(k%2==0){
                     sum+=k;
                     ans.push_back(sum);
                 }
               else{
                   ans.push_back(sum);
               }
        }
        return ans;
    }
};