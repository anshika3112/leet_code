class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int sign = 1; // Start with positive sign for the most significant digit
        while (n > 0) {
            int digit = n % 10;
            sum += sign * digit;
            sign = -sign; // Toggle the sign for the next digit
            n /= 10;
        }
        return sum;
    }
};
