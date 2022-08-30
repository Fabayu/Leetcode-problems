
      
     class Solution {
public:
    string reverseWords(string s) {
    // /1.first reverse the sting
        reverse(s.begin(),s.end());
        int i=0;;
        int j=0;
        int n=s.size();
        int lastindex=0;
        
        
        
        //gO 
        while(j<n){
            while(j<n&&s[j]==' ')j++;//keep skipping spaces 
            
            
            //mark startindex
            int si=i;
            
            //fill the word 
            while(j<n&&s[j]!=' '){
                s[i++]=s[j++];
                lastindex=i;
            }
            
            
            
            
            //revrse now 
            reverse(s.begin()+si,s.begin()+i);
            ///set space aftre each word
            s[i]=' ';
            i++;
        }
        
            
            
        s.resize(lastindex);
        return s;
        
        
        
        
        
        
        
        
        
        
    }
};

        
        
        
        
        
        
        
        
        
        
// istringstream ss(s);
//         string res="";
//         string w="";
//         while(ss>>w){\
          
//             res=w+" "+res;
//                      cout<<res;
            
//         }
//         cout<<endl;
//         cout<<res;
//         res.pop_back();
//         return res;
        
//     }
// };