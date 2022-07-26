
class Solution {
public:
    bool isScramble(string A, string B) {
        // bottom up 3d DP
        // time complexity O(n ** 4)
        int n = A.size();
        vector<vector<vector<bool>>> dp = vector(n, vector<vector<bool>>(n, vector<bool>(n+1, false)));
        for (int sz = 1; sz <= n; sz++) {
            for (int i = 0; i+sz <= n; ++i) {
                for (int j = 0; j+sz <= n; ++j) {
                    // check if A from i onwards, B from j onward with length sz are the same
                    // B has to be either CD or DC in some substring combination C and D
                    if (sz == 1) {
                        if (A[i] == B[j]) {
                            dp[i][j][sz] = 1;
                        }
                    } else {
                        // try all splits 
                        for (int split_sz = 1; split_sz < sz; ++split_sz) {
                            // left - right combo
                            if (dp[i][j][split_sz] && dp[i + split_sz][j + split_sz][sz - split_sz] ||
                            // right - left combo
                               dp[i][j + sz-split_sz][split_sz] && dp[i + split_sz][j][sz - split_sz]
                               ) {
                                dp[i][j][sz] = true;
                                break;
                            }
                        }
                    }
                }
            }
        }
        return dp[0][0][n];
    }
};