class Solution {
public:
    bool checkValidString(string s) {
     int cmin = 0, cmax = 0;
        for (char a : s) {
            if (a== '(')
                cmax++, cmin++;
            if (a== ')')
                cmax--, cmin = max(cmin - 1, 0);
            if (a == '*')
                cmax++, cmin = max(cmin - 1, 0);
            if (cmax < 0) return false;
        }
        return cmin == 0;   
    }
};