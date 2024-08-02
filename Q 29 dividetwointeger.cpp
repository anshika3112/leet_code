class Solution {
public:
    int divide(int dividend, int divisor) {
        // Special case: division by zero or dividend is INT_MIN and divisor is -1
        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX; // Handle division overflow case
        }

        long long a = static_cast<long long>(dividend) / divisor;
        if (a > INT_MAX) {
            return INT_MAX; // Handle overflow for division result
        } else if (a < INT_MIN) {
            return INT_MIN; // Handle underflow for division result
        }
        
        return static_cast<int>(a);
    }
};
