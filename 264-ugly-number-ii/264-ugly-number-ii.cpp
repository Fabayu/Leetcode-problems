

class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<int> dp(n);
        
        dp[0] = 1;
        int p1 = 0,p2 = 0,p3 = 0;
        
        for(int i = 1;i<n;i++)
        {
            int two = dp[p1]*2; 
            int three = dp[p2] * 3;
            int five = dp[p3] * 5;
            dp[i] = min(two,min(three,five));   
            
            if(dp[i]==two) p1++;
            if(dp[i]==three) p2++;
            if(dp[i]==five) p3++;
        }
        
        return dp[n-1];
    }
};