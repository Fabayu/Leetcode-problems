class Solution {
public:
    int lastRemaining(int n) {
      return n == 1 ? 1 : 2 * (1 + n / 2 - lastRemaining(n / 2));   
    }
};

//left and right=2k or 2k+1 even or odd dosent matter