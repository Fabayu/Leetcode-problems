class Solution {
public:
           
    vector<vector<int>> subsets(vector<int>& nums) {
            int n=nums.size();
        int x=(1<<n);

     vector<vector<int> > subs;
        
            
     for(int i=0;i<x;i++){
         vector<int>temp;
         for(int j=0;j<n;j++){
             
             if(1&(i>>j)){
                temp.push_back(nums[j]);
             }
         }
         subs.push_back(temp);
     }   
        return subs;
    }
};