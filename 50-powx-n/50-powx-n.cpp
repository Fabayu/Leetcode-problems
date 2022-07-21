
class Solution {
public:
    double find(double x,int n){
      if(n==0)return 1.0;
       if(x==0) return 0.0;
       else{
           double res=1.0; 
        res=find(x,n/2);
        res=res*res;
        if(n%2==0){
         return res;   
        }
           else{
               return x*res;
           }
       }
    }
    double myPow(double x, int n) {
        
        double res=1.0;
        res=find(x,abs(n));
        if(n>=0){
           return res; 
        }
        else{
            return (1/res);
        }
    }
        
};
    
    
    
    
    
    
    


//  double res=1;
//     while(n){
//         if(n%2) res=n>0?res*x:res/x;
//         x=x*x;
//         n/=2;
//     }
//      return res;
//         }


//         while(b){
//             if(b%2) res=b>0?res*x:res/x;
//                 x=x*x;
//                 b/=2;
                  
            
                
//             }
//         return res;