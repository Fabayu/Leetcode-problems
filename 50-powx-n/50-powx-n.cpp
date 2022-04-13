class Solution {
public:
    double myPow(double x, int n) {
            if(n<0) return 1/x * myPow(1/x, -(n+1));
        double x1;
           double x2;
     if(n==0) return 1;
     else{
          x1=myPow(x,n/2);
      x2=x1*x1;
         if(n%2==1){
            return x2*x; 
         }
         
     }
        return x2;
    }
};