class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int res = 0;
        int currSum = 0;
        
        int m[100001] = {};
        //Value is the index in this map
        int i = 0;
        int j = 0;
        
        while( j < nums.size()){
            
            if( m[nums[j]]){ 
                
                
                //We have to contract
                while( m[nums[j]]){
                    currSum -= nums[i];
                    
                    
                    
                    
                    ///Pops it off the tail
                    m[nums[i]]--;
                    ++i;
                }
            }
            //House keeping comparisons
            m[nums[j]]++;
            currSum += nums[j];
            res = max (res, currSum);
            ++j;
        }
        
        
        return res;
        
        
    }

    
};