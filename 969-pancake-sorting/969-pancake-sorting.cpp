


class Solution {
public:
    void rev(vector<int> &arr,int l,int r){
        
        while(l<r){
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;
            r--;
        }
        
    }
    vector<int> pancakeSort(vector<int>& arr) {
       int maxindex;
       int n=arr.size();
        vector<int> ans;
     for(int i=n-1;i>=0;i--){
         maxindex=i;
         for(int j=i-1;j>=0;j--){
             maxindex=arr[maxindex]<arr[j]?j:maxindex;
         }
         if(maxindex!=i){
             rev(arr,0,maxindex);
             ans.push_back(maxindex+1);
             
             rev(arr,0,i);
             ans.push_back(i+1);
         }
         
     }  
        
    return ans;
        
    }
};