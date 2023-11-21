class Solution {
public:
    std::string largestOddNumber(std::string num) {
        int i = num.size() - 1; 
        while (i >= 0 && num[i] == '0') {
            i--;
        }
        while (i >= 0) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1); 
            }
            i--;
        }
        
        return ""; 
    }
};
