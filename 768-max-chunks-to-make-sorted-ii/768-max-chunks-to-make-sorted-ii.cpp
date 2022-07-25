class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
     vector<int> rmin(n+1);
        rmin[n]=INT_MAX;
        for(int i=n-1;i>=0;i--){
            rmin[i]=min(arr[i],rmin[i+1]);
            
        }
        int lmax=INT_MIN;
        int chunk=0;
        for(int  i=0;i<n;i++){
            lmax=max(arr[i],lmax);
            if(lmax<=rmin[i+1]){
                chunk++;
            }
        }
        return chunk;
    }
};