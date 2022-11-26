class Solution {
public:    
    struct x {
        int start;  /* start time */
        int end;    /* end time */
        int profit; /* profit */
    };
    
    /* Sort by end time */
    static int sfn(x m, x n) {
        return m.end < n.end;
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        /* dp[i] holds the maximum profit from all includable (non-overlapping) items from 0 through i */
	    int sz = startTime.size(), dp[sz]; vector<x> y(sz);
	
        /* Sort objects by end time */
        for(int i = 0; i < sz; i++) { y[i].start = startTime[i]; y[i].end = endTime[i]; y[i].profit = profit[i]; }
	    sort(y.begin(), y.end(), sfn);
        
        for (int i = 0; i < sz; i++) {
            if (!i) { dp[i] = y[i].profit; continue; }
            
            int f = 0;  /* find last non-overlapping job that ends before start of this current job and record max profit up to j, dp[j] */
            for (int j = i - 1; j >= 0; j--) if (y[j].end <= y[i].start) { f = dp[j]; break; }
		    
            dp[i] = max(dp[i-1],        /* last max profit calculated from 0 .. i-1 */ 
                        f + y[i].profit /* current profit and max profit up to last non-overlapping job */);
	    }
        
	    return dp[sz - 1];
    }
};
