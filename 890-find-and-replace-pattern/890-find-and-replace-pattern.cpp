class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
     
        vector<string> res;
        p = U_calci(p);
        for (string w : words) if (U_calci(w) == p) res.push_back(w);
        return res;   
    }
     string U_calci(string w) {
        unordered_map<char, int> m;
        for (char c : w) if (!m.count(c)) m[c] = m.size();
        for (int i = 0; i < w.length(); ++i) w[i] = 'a' + m[w[i]];
        return w;
     }
};