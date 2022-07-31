class Solution {
public:
    string decodeString(string s) {
            string result;
        stack<string> st;
        for(int i = 0 ;i < s.size(); i++){
            if(isdigit(s[i])){
                int num = 0;
                while(i < s.size() && isdigit(s[i])){
                    num = num * 10 + (s[i++] - '0');
                }
                i--;
                st.push(to_string(num));
            }else if(isalpha(s[i])){
                string word = "";            while(i < s.size() && isalpha(s[i])){
                    word = word + s[i++];
                }
                i--;
                st.push(word);
            }else if(s[i] == '['){
                st.push("[");
            }else if(s[i] == ']'){
                string word, current;
                while(st.top() != "["){
                    word = st.top() + word;
                    st.pop();
                }
                st.pop();
                int times = stoi(st.top());  st.pop();
                while(times--){
                    current += word;
                }
                st.push(current);
            }
        }
        while(!st.empty()){
            result = st.top() + result; 
            st.pop();
        }
        return result;
        
    }
};