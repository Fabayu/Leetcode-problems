class Solution {
public:

    
    
    bool are_equal(vector<int> sone,vector<int> stwo){
        for(int i=0;i<26;i++)
        {
            
           if(sone[i]!=stwo[i]){
            return false;
        }
        }
       return true;
    }
    bool checkInclusion(string s1, string s2) {
    if(s2.size()<s1.size()){
        return false;
    }
        
    
        
        vector<int> freq_s1(26,0);
        for(char c: s1){
            freq_s1[c-'a']++;
        }
        
        vector<int> freq_s2(26,0);
        
        int i=0;
        int j=0;
        while(j<s2.size()){
            freq_s2[s2[j]-'a']++;
        
        if(j-i+1==s1.size()){
            if(are_equal(freq_s1,freq_s2)) return true;
        }
        if(j-i+1<s1.size()){
            j++;
        }
        else{
            freq_s2[s2[i]-'a']--;
            i++;
            j++;
        }
        }
      return false;
    }
};