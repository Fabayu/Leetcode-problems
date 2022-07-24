


//Hey ayush look look at the analogy --------     <<odd_index>> ------------->even_index<-----------
//odd saying i will be greater than my successor and predecessor as well [agle wale se bhi piche wale se bhi i m larger]-------Similarly left_index saing [VICE-VERSA]

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res(nums.size());
        int i=1;
        int j=nums.size()-1;
        while(i<nums.size()){
           res[i]=nums[j];
            i+=2;
            j--;
        }  
        i=0;
        while(i<nums.size()){
            res[i]=nums[j];
            i+=2;
            j--;
        }
         for(int i=0;i<nums.size();i++ ){
             nums[i]=res[i];
         }  
        
        }    
};