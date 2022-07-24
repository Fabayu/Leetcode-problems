class Solution {
public:
  
    bool isPalindrome(string s,int i,int j) {//function toc check palindrome
        while(i < j) {
            if(s[i] != s[j]) {  //not match return false instantly
                return false;
            }
            i++,j--; //else move move move
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        //two pointer
        while(i<j) {
            if(s[i] != s[j]) {  //encounter first unmatcg char 
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1); 
                //delete skip  first char i+1,j  || delete last one skip last one i,j-1 
                //if either of one makes palindrome yes u made the palindrome by maximum one deletion 
            }
            else{         //if equal keep moving
                i++,j--; //move pointers
        }
        }
        return true;
    }
};
