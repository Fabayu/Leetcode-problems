class Solution {
public:
    double myPow(double x, int b) {
        double res=1;
        while(b){
            if(b%2) res=b>0?res*x:res/x;
                x=x*x;
                b/=2;
                  
            
                
            }
        return res;
        }
        
};
