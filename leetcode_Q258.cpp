class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        }
        int result = 1 + ((num - 1) % 9);
        return result;
    }
};
