class Solution {
public:
    int minimumSum(int num) {
        // Convert the number into a vector of digits
        std::vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        std::reverse(digits.begin(), digits.end());

        // Sort the digits in ascending order
        std::sort(digits.begin(), digits.end());

        // Create two new integers by interleaving the digits
        int new1 = 0, new2 = 0;
        for (int i = 0; i < digits.size(); ++i) {
            if (i % 2 == 0) {
                new1 = new1 * 10 + digits[i];
            } else {
                new2 = new2 * 10 + digits[i];
            }
        }

        // Return the minimum possible sum
        return new1 + new2;
    }
};
