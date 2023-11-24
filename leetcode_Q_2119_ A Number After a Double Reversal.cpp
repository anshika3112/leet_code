class Solution {
public:
    bool isSameAfterReversals(int num) {
        int original = num;
        int reverse = 0;

        // Reverse the number once
        while (num > 0) {
            reverse = (reverse * 10) + num % 10;
            num /= 10;
        }

        int reverse2 = 0;

        // Reverse the reversed number to get reverse2
        while (reverse > 0) {
            reverse2 = (reverse2 * 10) + reverse % 10;
            reverse /= 10;
        }

        // Check if the original number is the same as reverse2
        return (original == reverse2);
    }
};
