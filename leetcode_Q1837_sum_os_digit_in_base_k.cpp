class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;

        while (n > 0) {
            sum += n % k; // Add the last digit in base k to the sum
            n /= k; // Move to the next digit in base k
        }

        return sum;
    }
};
