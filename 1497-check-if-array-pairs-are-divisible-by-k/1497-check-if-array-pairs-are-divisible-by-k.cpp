class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
          unordered_map<int, int> map;
        for (int e : arr) {
            int rem = e % k;
            int c1 = -rem;
            int c2 = rem < 0 ? - k - rem : k - rem;
            
            

            if (map[c1]) {
                map[c1] -= 1;
            } else if (map[c2]) {
              
                
                
                map[c2] -= 1;
            } 
            else {
                map[rem] += 1;

        }}

        
        
        
        for (auto e : map) {
            if (e.second) return false;
        }

        return true;
    }
};