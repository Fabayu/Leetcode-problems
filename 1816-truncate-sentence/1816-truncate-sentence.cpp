class Solution {
public:
    string truncateSentence(string s, int k) {
                int d=0;string s1="";
        for(auto i:s){
            if(i==' ')k--;
            if(!k)break;
            s1+=i;
        }
        return s1;

    }
};