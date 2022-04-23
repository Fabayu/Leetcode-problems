class Solution {
public:
    int res=0;
    int minFlips(int a, int b, int c) {
      for(int i=0;i<32;i++){
          bool x=false;
          bool y = false;
          bool  z=false;
          
          if(a&(1<<i)){
            x=true;
              
          }
          if(b&(1<<i)){
              y=true;
          }
          if(c&(1<<i)){
              z=true;
          }
          
          if(z==false){
              if(x==true&y==true){
                  res+=2;
              }
              else if(x==true|y==true){
                res+=1;  
              }
          }
          else{
              if(x==false&y==false){
                  res+=1;
              }
          }
          
      }  
        return res;
    }
};