class Solution {
public:
    int titleToNumber(string columnTitle) {

        int result = 0;
        for(char c : columnTitle)
        {
            int d = c - 'A' + 1;////d = s[i](char) - 'A' + 1 (we used  s[i] -  'A' to convert the lette
            result = result * 26 + d;
        }
        return result;
        
    }
};   
    