class Solution {
public:
    string longestNiceSubstring(string s,int start = 0, int end = -1) {
         if (end == -1)
        end = s.size();
    int cnt[26][2] = {}, j = start - 1;
    for (auto i = start; i < end; ++i)
        cnt[tolower(s[i]) - 'a'][(bool)islower(s[i])] = 1;
    string res;
    for (auto i = start; i <= end; ++i) {
        int ch = i == end ? -1 : tolower(s[i]) - 'a';
        if (ch == -1 || cnt[ch][0] + cnt[ch][1] == 1) {
            if (j == -1 && ch == -1)
                return s;
            auto res1 = longestNiceSubstring(s.substr(j + 1, i - j - 1));
            if (res1.size() > res.size())
                res = res1;
            j = i;
        }
    }
    return res;
    }
};