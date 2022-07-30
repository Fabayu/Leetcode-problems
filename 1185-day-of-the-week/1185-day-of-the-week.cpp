class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
      std::tm t{};
        t.tm_mday = day; 
        t.tm_mon = month - 1; 
        t.tm_year = year - 1900; 
		
        std::mktime(&t);
        char buff[10];
        strftime(buff, 10, "%A", &t);
        return std::string(buff);   
    }
};