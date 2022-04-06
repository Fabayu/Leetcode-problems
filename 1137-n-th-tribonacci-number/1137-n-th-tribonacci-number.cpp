class Solution {
public:
    int tribonacci(int n) {
    if(n<2){
        return n;
    }
        if(n==2){
            return 1;
        }
    if(n==3){
        return 2;
    }
    int a=0,b=1,c=1,d=a+b+c;
        for(int i=3;i<n;i++){
            a=b;
            b=c;
            c=d;
            d=a+b+c;
        }
        return d;
    }
};