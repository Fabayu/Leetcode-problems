class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
    int max=nums[0];      /////////[2,6,4,8,10,9,15]   assume 2 be max end =-1
        int end=-1;
        
        // try to find the element which has is smallest in cpmaprison to its previous or left this will denote that yes this this only is denoting unsorted critical point 
        for(int i=1;i<nums.size();i++){
            if(max>nums[i]){
                end=i; ///////////-->>end=4-->>9
            }
            else{
                max=nums[i];     //////---->max=
            }
        }
        
        
  //now tracerse from backward and consider min element try to find element who is greater than its immediate right
        int start=0;
        int min=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(min<nums[i]){
                start=i;
            }
            else{
                min=nums[i];
            }
        }
        
        return end-start+1; // return size
        
    }
};



// look point to be noted is that we will try to find element which is 






