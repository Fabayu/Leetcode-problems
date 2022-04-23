class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
     if(n<0){
         return false;
     } 
        
        while(n>0){
            cnt++;
            n=n&(n-1);
        }
        
        if(cnt==1){
            return true;
        }
        else{
            
         return false;
        }
    }
};