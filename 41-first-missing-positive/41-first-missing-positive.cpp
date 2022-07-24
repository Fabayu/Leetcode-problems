


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        
        
     bool one =false;  //  check precence of 1 if not we will return thisonly as first missing positive
        
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                one =true; //if one presnt or not 
                
            }
            if(nums[i]<1||nums[i]>nums.size()){   // out of bound mark it 1 now all element will be in range
                nums[i]=1;
                
            }
        }
        if(one==false )return 1;  // if 1 not return 1 missing 
        
        
       //now mark coreponding ele-1 negative make it negative note that idx+1 will mark idx negative   
        
        for(int i=0;i<nums.size();i++){ 
            int idx=abs(nums[i]);
            nums[idx-1]=-abs(nums[idx-1]);     //abs value becuase index can be negative if operation is perfored on it by previous elemets 
            
        }
        
        
        //now the array we will have will consist of only negative ellements except 1 and that will denote our missing number say elemet positive is at index 9 then number missing is 10 cause thwere was no element which was capable of making 10 negative and it is ofcourse 9
        
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)return i+1;
        }
        return nums.size()+1;
    }
};