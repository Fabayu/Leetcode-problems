class Solution {
public:
    int countValidWords(string s) {
      
        istringstream iss(s);
	const regex reg("[a-z]*([a-z]-[a-z])?[a-z]*[,.!]?");
	return count_if(istream_iterator<string>(iss), istream_iterator<string>(), [&](const string& a){return regex_match(a, reg);});

    }
};