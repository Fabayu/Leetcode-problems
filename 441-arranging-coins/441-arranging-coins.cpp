class Solution {
public:
    int arrangeCoins(int n) {
       int rows=1;
        while(n>0){
            rows++;
            n=n-rows;
            
        }
        return rows-1;
    }
};