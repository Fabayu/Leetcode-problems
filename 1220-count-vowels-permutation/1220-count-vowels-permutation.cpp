

class Solution {
public:
    int countVowelPermutation(int n) {
        long a = 1, e = 1, i = 1, o = 1, u = 1, mod = pow(10, 9)+7;
        long a2, e2, i2, o2, u2; 
       
        
        
        
       
        for (int j = 2; j <= n; j++) {
            a2 = (e + i + u) % mod;
            e2 = (a + i) % mod;
            i2 = (e + o) % mod;
            o2 = i;
            u2 = (o + i) % mod;
            
            a = a2, e = e2, i = i2, o = o2, u = u2;
            
            
            /* say for n==2
       a2=3;
       e2=2;
       i2=2;
       02=1;
       u2=2;
       now update all values and go for next iteration
       
       
       
         */
            
            
            
        }
        
        return (a + e + i + o + u) % mod;
    }
};
