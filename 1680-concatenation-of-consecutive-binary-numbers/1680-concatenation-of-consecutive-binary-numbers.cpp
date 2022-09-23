
class Solution {
public:
    int concatenatedBinary(int n) {
         long ans = 0, mod = 1e9+7; //declaration of variables
        for(int i=1;i<=n;i++){
            int k=i;
            int p=0;
            while(k>0){ //loop to count the no of bits
                p++;
                k/=2;
            }
            ans=((ans<<p)+i)%mod; //left shift and add the number to ans
        }
        return ans;
    }
};