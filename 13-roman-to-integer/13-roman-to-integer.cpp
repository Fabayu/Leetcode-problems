class Solution {
public:
    int romanToInt(string str) {
      unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int sum=0;
        for(int i=0;i<str.size();i++){
            if(i<str.size()-1&&m[str[i+1]]>m[str[i]]){
                sum+=m[str[i+1]]-m[str[i++]];
                
            }
            else{
                sum+=m[str[i]];
            }
        }
        return sum;
    }
};