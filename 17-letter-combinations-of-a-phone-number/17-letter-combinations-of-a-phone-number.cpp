class Solution {
public:
    unordered_map<char, string> hash;
    
    Solution(){
        hash['2'] = "abc";
        hash['3'] = "def";
        hash['4'] = "ghi";
        hash['5'] = "jkl";
        hash['6'] = "mno";
        hash['7'] = "pqrs";
        hash['8'] = "tuv";
        hash['9'] = "wxyz";
    }
    
    vector<string> letterCombinations(string digits) {
        
        vector<string> combinations;
        int len = digits.length();
        if( len )
            findCombination(combinations, "", digits, 0, len);
        return combinations;
    }
    
    void findCombination(vector<string> &combinations, string combination, string &digits, int currIndex, int &len){
        
        if( currIndex >= len ){
            combinations.push_back(combination);
            return;
        }
        
        for(auto &chr : hash[digits[currIndex]]){
            findCombination(combinations, (combination + chr), digits, currIndex+1, len);
        }
    }
};