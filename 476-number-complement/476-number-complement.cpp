

class Solution {
public:
    int findComplement(int num) {
        return (pow(2,floor(log2(num))+1)-1)-num;
        ////we subtract from maximum value to the given input will gives the complement of the given input.
    }
};

//floor(log2(num))+1 gives us the number of bits in integer num
// maximum value obtained with this number of bits is pow(2,no of bits)-1


