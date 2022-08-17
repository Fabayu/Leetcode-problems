class Solution {
public:
   
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
 
        
        vector<int> ans;
        int n=nums.size();
        vector<int> left(n);
        vector<int> right(n);
        
        // lets fill lgt
        for(int i=0;i<n;i++){
            left[i]=nums[i];
            if(i%k!=0){
                left[i]=max(left[i-1],left[i]);
                
            }
        }
            
            right[n - 1] = nums[n - 1];
            for(int i=n-2;i>=0;i--){
                right[i]=nums[i];
                if(i%k!=(k-1)){
                    right[i]=max(right[i],right[i+1]);
                }
            }
            
        
            for(int i=0;i<n-k+1;i++){
                ans.push_back(max(right[i],left[i+k-1]));
            }
        
        
        
        
        
       return ans;
    }
};
      
// // 			for (i = 0; i < n; i++)
// // 			{
// // 				lft[i] = nums[i];
// 				 // If it start of block, then that element is max so far in the block
// 				 // Else lft[i] is max so far in the block
// 				if (i % k !=0) 
// 					lft[i] = max(lft[i - 1], lft[i]);
// 			}

// 			rgt[n - 1] = nums[n - 1];
// 			for (i = n - 2; i >= 0; i--)
// 			{
// 				rgt[i] = nums[i];
// 				// same as for left, but now traversing from right
// 				if (i % k != (k - 1))
// 					rgt[i] = max(rgt[i], rgt[i + 1]);
// 			}

// 			vector<int> ans;

// 			for (i = 0; i < wins; i++)
// 				ans.push_back(max(rgt[i], lft[i + k - 1]));
//             return ans;
//     }
// };








//         deque<int> dq;

//         for(int i=0;i<nums.size();i++)
//         {
//        if(!dq.empty()&&i-k==dq.front())dq.pop_front();
//             //out of bound removing 
            
//             while(!dq.empty()&&nums[i]>=nums[dq.back()])dq.pop_back();
//             dq.push_back(i);
//             if(i>=k-1)ans.push_back(nums[dq.front()]);
       
//     }
//         return ans;