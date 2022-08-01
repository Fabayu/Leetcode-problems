
class Solution {
private:
    bool isValid(string s) {
        int sum = 0;
        for(char &c : s) {
            if(c == '(') ++sum;
            else if(c == ')') --sum;
            if(sum < 0) return false;
        }
        return sum == 0;
    }
public:
    vector<string> removeInvalidParentheses(string s) {
        int num1 = 0, num2 = 0;
        for(char &c : s) {
            num1 += c == '(';
            if (num1 == 0) {
                num2 += c == ')';
            } else {
                num1 -= c == ')';
            }
        }
        vector<string> ret;
        dfs(s, 0, num1, num2, ret);
        return ret;
    }
    void dfs(string s, int beg, int num1, int num2, vector<string> &ret) {
        if(num1 == 0 && num2 == 0) {
            if(isValid(s))
                ret.push_back(s);
        } else {
            for(int i = beg; i < s.size(); ++i) {
                string tmp = s;
                if(num2 == 0 && num1 > 0 && tmp[i] == '(') {
                    if(i == beg || tmp[i] != tmp[i - 1]) {
                        tmp.erase(i, 1);
                        dfs(tmp, i, num1 - 1, num2, ret);
                    }
                }
                if(num2 > 0 && tmp[i] == ')') {
                    if(i == beg || tmp[i] != tmp[i - 1]) {
                        tmp.erase(i, 1);
                        dfs(tmp, i, num1, num2 - 1, ret);
                    }
                }
            }
        }
    }
};

