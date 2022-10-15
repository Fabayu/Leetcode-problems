class Solution {
public:
    
    bool is(vector<int>& arr, int s,int n){
    
    
        bool t[n+1][s+1];
     for(int i=0;i<n+1;i++){
         for(int j=0;j<s+1;j++){
             if(i==0){
                 t[i][j]=false;
                 
             }
             if(j==0){
                 t[i][j]=true;
             }
         }
     }
             for(int i=1;i<n+1;i++){
         for(int j=1;j<s+1;j++){ 
             
              if(arr[i-1]<=j){
                 t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
                 
             }
             else{
                 t[i][j]=t[i-1][j];
               
             }
         }
     }
     
     return t[n][s]; 
    
     
     
    }
        
    
    
    
    bool canPartition(vector<int>& nums) {
            int n = nums.size();
        int sum = 0 ;
        for(int i = 0 ; i<nums.size() ; i++)
            sum+=nums[i];
        if(sum%2!=0)
            return false;
        else{
            sum = sum/2;
        }
        return is(nums , sum , n);
    
    }
};













