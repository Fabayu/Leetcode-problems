class Solution {
public:
    bool isIsomorphic(string s, string t) {
      int a1[252]={0};
        int a2[252]={0};
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(a1[s[i]]!=a2[t[i]]){
                return false;
            }
            else{
                a1[s[i]]=i+1;
                a2[t[i]]=i+1;
                
            }
        }
        return true;
    }
};