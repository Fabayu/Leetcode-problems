class Solution {
public:
    bool isPowerOfFour(int my_num) {
        
        //bit and the manipulate reversely and check conditions
          return my_num > 0 && (my_num & (my_num - 1)) == 0 && (my_num - 1) % 3 == 0;
  
    }
};