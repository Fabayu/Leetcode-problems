
class Solution {
public:
    double find(double x,int n){
        //base cases
      if(n==0)return 1.0;
       if(x==0) return 0.0;
        
        
       else{
           double res=1.0; 
        res=find(x,n/2);  // half krle half mekr lunga 
        res=res*res;      // idhr aa half me de rha
        if(n%2==0){        // check for even  [2^6= (2*2*2 ....half)]
         return res;   
        }
           else{
               return x*res;     // check for odd{2^5=(2*...half .....itself)}
           }
       }
    }
    double myPow(double x, int n) {
        
        
        
        
        //double since res can be in decimal
        double res=1.0;
        
        //recursive call on abs n if pos good nega go to quotient
        res=find(x,abs(n));
        
        
        //if n>=0 res will be returned 
        if(n>=0){
           return res; 
        }
        //otherwise  school like div
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