class Solution {
public:
    int numDecodings(string s) {
       int n = s.size();
    if(n == 0 || s[0] == '0') return 0;
    if(n == 1) return 1;
    int res = 0,fn_1 = 1,fn_2 = 1;
    for(int i = 1;i < n;i++){
        int temp = fn_1;
        if(isValid(s[i])&&isValid(s[i-1],s[i]))  res+=fn_1+fn_2;
        if(!isValid(s[i])&&isValid(s[i-1],s[i])) res+=fn_2;
        if(isValid(s[i])&&!isValid(s[i-1],s[i])) res+=fn_1;
        if(!isValid(s[i])&&!isValid(s[i-1],s[i]))  return 0;
        fn_1 = res;
        fn_2 = temp;
        res = 0;
    }
    return fn_1;
}
bool isValid(char a,char b){
    return a == '1'||(a == '2' && b <='6');
}
bool isValid(char a){
    return a != '0';

    }
};