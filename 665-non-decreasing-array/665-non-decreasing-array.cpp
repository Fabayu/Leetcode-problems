class Solution {
public:
    bool checkPossibility(vector<int>& a) {
      int modi = 0;
        for (int i = 1; i < a.size(); i++) {
            if (a[i] < a[i - 1]) {
                if (modi++ > 0)
                    return false;
                if (i - 2 < 0 || a[i - 2] <= a[i]) a[i - 1] = a[i]; 
                else a[i] = a[i - 1];
            }
        }
        return true;
      
    }
};