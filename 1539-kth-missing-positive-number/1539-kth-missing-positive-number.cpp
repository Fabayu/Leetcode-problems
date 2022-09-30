class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
     int l=0;
        int r=arr.size();
        while(l<r){
            int m=l+(r-l)/2;
            if(arr[m]-1-m<k){
                l=m+1;
            }
            else{
               r=m; 
            }
        }
        return l+k;
    }
};