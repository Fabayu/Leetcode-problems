
class Solution {
public:
    bool isThree(int n) {
        if(n==1 or n==2)
        {
            return false;
        }
        int ayush=sqrt(n);
    
        if(ayush*ayush==n)
        {
            for(int i=2;i<ayush;i++)
            {
                
            
                if(n%i==0)
                {
                    return false;
                }
            }
            return true;
        }
        return false;
        
    }
};