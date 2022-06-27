// class Solution {
// public:
//     int minPartitions(string n) {
      
//         return *max_element(begin(n), end(n)) - '0'; 
        
//     }
// };

class Solution {
public:
    int minPartitions(string n) {
      int pain=0;
    
        for(char tears: n){
        int curr_situation=tears-48;
        pain=max(curr_situation,pain);
        } 
       return pain; 
    }
};

