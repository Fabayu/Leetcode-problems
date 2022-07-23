

class Solution {
public:
    bool isNumber(string s) {
        while(!s.empty() && s[0] == ' ')
        {
            s.erase(s.begin());
        }
        while (!s.empty() && s[s.size()-1] == ' ')
        {
            s.erase(s.end()-1);
        }
        
        if(s.empty())
        return false;
        
        int state = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '-' || s[i] == '+')
            {
                if(state == 0 || state == 3)
                {
                    state ++;
                }
                else
                {
                    return false;
                }
            }
            
            else if(s[i] == '.')
            {
                if( state == 2)
                {   
                    state = 7;
                }
                else if(state == 0|| state == 1)
                {
                    state = 6;
                }
                else
                {
                    return false;
                }
                
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                if(state == 1 || state == 4 || state == 6)
                {
                    state ++;
                }
                else if(state == 0 || state == 3)
                {
                    state = state+2;
                }
            }
            else if(s[i] == 'e' || s[i] == 'E')
            {
                if(state == 2 ||  state == 7)
                {
                    state = 3;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        
        if(state == 2|| state == 7 || state == 5)
        return true;
        
        
        return false;
       
    }
};