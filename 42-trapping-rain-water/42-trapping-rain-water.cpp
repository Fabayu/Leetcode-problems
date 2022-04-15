class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
    int right=n-1;
        int left=0;
         int maxleft=0;
         int maxright=0;
         int resw=0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=maxleft){
                    maxleft=height[left];
                    
                }
                else{
                    resw+=maxleft-height[left];
                }
                left++;
            }
        else{
            if(height[right]>=maxright){
                maxright=height[right];
                
            }
            else{
                resw+=maxright-height[right];
                
            }
            right--;
        }
        }
            return resw;
            
        
        
        
    }
        
        
        
        
        
    
};