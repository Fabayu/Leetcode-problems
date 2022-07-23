class Solution {
public:
    int valid(vector<int> &arr){
            int n=arr.size();
            int val=arr[0];
            int cnt=1;
        for(int i=1;i<arr.size();i++){
            if(val==arr[i]){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt==0)
            {
                val=arr[i];
                cnt=1;
            }
            
        }
        return val; 
        
        }
    int majorityElement(vector<int>& nums) {
        
      int val=valid(nums);
        
     
          
      

            return val;
        
    }

};