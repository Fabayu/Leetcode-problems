class Solution {
public:
    string removeDuplicates(string s, int k) {
       stack<pair<char,int>> st;
string str = "";
for(int i=0;i<s.length();i++){
if(st.empty()){
st.push({s[i],1});
}
else{
if(st.top().first == s[i]){
st.push({s[i],st.top().second + 1});
}
else{
st.push({s[i],1});
}
}

        if(st.top().second == k){
            for(int i=1;i<=k;i++){
                st.pop();
            }
        }
    }
    while(!st.empty()){
        str+=st.top().first;
        st.pop();
    }
    reverse(str.begin(),str.end());
    return str; 
    }
};