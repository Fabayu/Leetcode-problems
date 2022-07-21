class Solution {
public:
    
     int burger(vector<int>& arr,int ind,int n,vector<vector<int>> &dp)
    {
        if(ind >= arr.size() || n== 0) return 0;
        if(dp[ind][n] !=-1) return dp[ind][n];
        
        int not_take = burger(arr,ind+1,n,dp); 
        int take = arr[ind] + burger(arr,ind+2,n-1,dp);
        
        return dp[ind][n] = max({take,not_take});
        
    }
    int maxSizeSlices(vector<int>& slices) {
        vector<int> arr1(slices.begin(),slices.end()-1); // when not considering the last value i.e for clockwise.
        vector<int> arr2(slices.begin()+1,slices.end()); // when not considering the first value i.e for anti-clock
        int n = slices.size()/3;
        vector<vector<int>> dp1(501,vector<int>(n+1,-1)); //  Bob participates  then your max
        vector<vector<int>> dp2(501,vector<int>(n+1,-1)); //  Alice participates  then your max
        return max({burger(arr1,0,n,dp1),burger(arr2,0,n,dp2)}); // max between those two.
    }    
    
};