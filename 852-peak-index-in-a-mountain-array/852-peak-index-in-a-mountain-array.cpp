class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      
      int l=0;
        int n=arr.size();
        int r=n-1;
        
    
    
            while(l<r){
               int  mid=l+(r-l)/2;
                if(arr[mid]<arr[mid+1]){
                  
                    l=mid+1;
                    
                }
                
                else{
                    r=mid;
                }
            }
        
        return l;
    }
        
}; 