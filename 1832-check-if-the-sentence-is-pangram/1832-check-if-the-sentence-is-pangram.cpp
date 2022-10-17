class Solution {
public:
    bool checkIfPangram(string sentence) {
      set<char> s;
        for(auto it:sentence){
            s.insert(it);
        }
        return s.size()==26;
    }
};