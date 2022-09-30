class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
     int l=0;
        int r=arr.size();
        while(l<r){
            int m=l+(r-l)/2;
            if(arr[m]-(m+1)>=k){
                r=m;
            }
            else{
               l=m+1; 
            }
        }
        return l+k;
    }
};