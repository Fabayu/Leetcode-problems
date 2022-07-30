class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
      int count_ing = 0;
        for (int i = (int) bits.size() - 2; i >= 0 && bits[i] == 1; i--) count_ing++;
        return (count_ing % 2 == 0);  
    }
};