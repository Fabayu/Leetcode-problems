class Solution {
public:
   
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         vector<int> ans;
    
        
        deque<int> dq;

        for(int i=0;i<nums.size();i++)
        {
            
            //first we will remove out of bound elemets (pop-front)
            if(!dq.empty()&&dq.front()==i-k)dq.pop_front();
            //we will keep popping fro back till elemetnt at last is less than incoming 
            while(!dq.empty()&&nums[i]>nums[dq.back()])dq.pop_back();
            dq.push_back(i);
            
            if(i>=k-1)ans.push_back(nums[dq.front()]);
            
            
            
       
    }
        return ans;
    }
};














//  deque<int> dq;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//            
//         }
//         return ans;