class Solution {
public:
    int search(vector<int>& nums, int target) {
       int lo=0;
        
        int hi=nums.size()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>nums[hi]){
              lo=mid+1;  
            }
            else{
                hi=mid;
            }
        }
        
        
        int piv=hi;
        int left=0;
        int right=nums.size()-1;
        if(target>=nums[piv]&&target<=nums[right]){
            left=piv;
        }
        else{
            right=piv;
        }
        
        
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
               right=mid-1; 
            }
            else{
              left=mid+1;  
            }
        }
        return -1;
    }
};