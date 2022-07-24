/*Tracking the running balance of dresses we need to move through each machine. If, for example, we have 5 extra dresses so far, and this machine has 2 extra dresses, we need to pass total 7 dresses through that machine (requires 7 steps). Also, we need to track the number of dresses we need to offload from a particular machine (machine[i] - target dresses). This number may be higher than the running balance if dresses are passed both ways, as shown in the example2

Example 1: [1, 1, 6, 6, 1]
total dresses: 15, target dresses: 3, maximum offload is 3 (6 - 3).
Running balance:[-2][-4][ -1][ 2][ 0]
Answer: max(3, abs(-4)) = 4.

Example 2: [1, 1, 4, 8, 1], 
total dresses: 15, target dresses: 3, maximum offload is 5 (8 - 3).
Running balance:[-2][-4][ -3][ 2][ 0]
Answer: max(5, abs(-4)) = 5

*/



class Solution {
public:
    int findMinMoves(vector<int>& machines) {
     int totalDresses = 0, size = machines.size();
    for (auto i = 0; i < size; ++i) totalDresses += machines[i];
    if (totalDresses % size != 0) return -1;
    
    auto targetDresses = totalDresses / size, totalMoves = 0, ballance = 0;
    for (auto i = 0; i < size; ++i) {
        ballance += machines[i] - targetDresses;
        totalMoves = max(totalMoves, max(machines[i] - targetDresses, abs(ballance)));
    }
    return totalMoves;
   
    }
};