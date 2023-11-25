#include <string>

class Solution {
public:
    std::string categorizeBox(int length, int width, int height, int mass) {
        bool isBulky = false;
        bool isHeavy = false;

        if (length >= 10000 || width >= 10000 || height >= 10000 || (long long)length * width * height >= 1000000000LL) {
            isBulky = true;
        }

        if (mass >= 100) {
            isHeavy = true;
        }

        if (isBulky && isHeavy) {
            return "Both";
        } else if (isBulky && !isHeavy) {
            return "Bulky";
        } else if (!isBulky && isHeavy) {
            return "Heavy";
        } else {
            return "Neither";
        }
    }
};
