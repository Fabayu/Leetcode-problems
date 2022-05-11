class Solution {
public:
    int countVowelStrings(int n) {
        n++;
        return (n*(n+1)*(n+2)*(n+3))/24;
    }
};