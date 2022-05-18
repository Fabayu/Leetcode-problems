class Solution {
public:
    int maxArea(vector<int>& height) {
  int left=0;
   int right=height.size() -1;
        int maxi=0;
   while(left<right){
       int w=right-left;
       int h=min(height[left],height[right]);
       int area=w*h;
       maxi=max(area,maxi);
       if(height[left]<height[right]){
           left++;
       }
       else if(height[left]>height[right]){
          right--; 
       }
       else{
           right--;
           left++;
       }
       
       
   }     
        return maxi;
    }
};
    



//  int n=height.size();
//         int area;
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//               area=(j-i)*min(height[i],height[j]); 
//                maxi=max(area,maxi); 
//             }
//         }
//         return maxi;}
    
    
    
    
