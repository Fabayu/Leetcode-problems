class Solution {
public:
    bool closeStrings(string w1, string w2) {
       if (w1.size() != w2.size())
        return false;
    vector<int> cnt1(26), cnt2(26);
    for (auto i = 0; i < w1.size(); ++i) {
        ++cnt1[w1[i] - 'a'];
        ++cnt2[w2[i] - 'a'];
    }
    if (!equal(begin(cnt1), end(cnt1), begin(cnt2), end(cnt2), [](int a, int b) { return (bool)a == bool(b); }))
        return false;
    sort(begin(cnt1), end(cnt1));
    sort(begin(cnt2), end(cnt2));
    return cnt1 == cnt2; 
    }
};