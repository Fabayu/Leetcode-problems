class Solution {
public:
    int minDistance(string word1, string word2) {
    // Have  a table to store results of subproblems
        int dp[word1.size()+1][word2.size()+1];

// get pinching into all characters of second string 
        for(int k=0; k<=word1.size(); k++)
            dp[k][0] = k;
// If not previous  string is empty, only option is to 
// remove all characters of first string
        for(int k=0; k<=word2.size(); k++)
            dp[0][k] = k;
// come on fill dp[][] in bottom up manner 
        for(int i=1; i<=word1.size(); i++){
            for(int j=1; j<=word2.size(); j++){
//in case characters at current position in 2 strings are equal
//here and there  will be no new operation so copy value from previous position
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
//  last character is different, consider all 
//  find the minimum
                else
                    dp[i][j] = 1 + min({dp[i][j - 1], // Insert 
                                   dp[i - 1][j], // Remove 
                                   dp[i - 1][j - 1]}); // Replace 
            }
        }
        
        return dp[word1.size()][word2.size()];    
    }
};