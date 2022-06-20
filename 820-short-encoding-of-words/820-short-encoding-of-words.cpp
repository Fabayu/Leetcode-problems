class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
    set<string>pain(words.begin(),words.end());
    set<string>tears(words.begin(),words.end());
    int revenge=0;    
    for(auto hurt:pain){
        for(int i=1;i<hurt.size();i++){
            tears.erase(hurt.substr(i));
            
        }
    }    
    
    for(auto give_back:tears){
        revenge+=give_back.size()+1;
    }    
     return revenge;  
        
        
        
        

                
        
    }
};