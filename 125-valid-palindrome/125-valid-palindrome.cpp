class Solution {
public:
    bool isPalindrome(string s) {
       
             int i = 0, j = s.size() - 1; 
        while(i < j) {
            while(!isalnum(s[i])&&i<j)i++;
            while(!isalnum(s[j])&&i<j)j--;
            if(toupper(s[i])!=toupper(s[j]))return false;
            i++;
            j--;
        }
        return true;
        
        
    }};     
        
//     { // Move 2 pointers from each end until they collide
//         while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumeric
//         while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
//         if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
//     }
    
//     return true;
//     }


//  for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
//         while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumeric
//         while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
//         if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
//     }
    
    // return true;
