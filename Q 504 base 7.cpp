#include <string>

class Solution {
public:
    std::string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        string result = "";
        bool isNegative = num < 0;
        num = abs(num);
        
        while (num > 0) {
            result = to_string(num % 7) + result;
            num /= 7;
        }
        
        if (isNegative) {
            result = "-" + result;
        }
        
        return result;
    }
};
