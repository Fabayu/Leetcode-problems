class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> res;
        for (auto word : words) {
            string curr = "";
            for (auto ch : word)
                curr += codes[ch-97];
            res.insert(curr);
        }
        return res.size();
        
    }
};