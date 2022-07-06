class Solution {
public:
    int fib(int n) {
     if(n<2){
         return n;
     }
     int teri=0,meri=1,yadein=teri+meri;
        for(int i=2;i<n;i++){
            teri=meri;
            meri=yadein;
            yadein=teri+meri;
            
        }
        return yadein;
    }
};