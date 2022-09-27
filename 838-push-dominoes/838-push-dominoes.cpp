


class Solution {
public:
    string pushDominoes(string str) {
        
        int n = str.size ();
        // first character
        int j = 0;
        while (j < n and str [j] == '.') j++;
        if (j == n) return str;
        if (str [j] == 'L') for (int i = 0; i < j; i++) str [i] = 'L';
        int st = j + 1;
        
        // last character
        j = n - 1;
        while (j >= 0 and str [j] == '.') j--;
        if (str [j] == 'R') for (int i = j + 1; i < n; i++) str [i] = 'R';
        int end = j;
        
        // all middle ones
        j = st;
        int i = st - 1;
        while (j <= end) {
            
            char c = str [i];
            
            while (j <= end and str [j] == '.') j++;
            if (j == end + 1) return str;
            
            if (c == str [j]) for (int k = i + 1; k < j; k++) str [k] = c;   // if both the pointers are same
            else if (c == 'R') { // if starting pointer is R and the other one is L
                
                int s = i + 1, e = j - 1;
                while (e > s) {
                    
                    str [s] = 'R';
                    str [e] = 'L';
                    
                    s++;
                    e--;
                }
            }
            
            i = j;
            j++;
        }
        
        return str;
    }
};