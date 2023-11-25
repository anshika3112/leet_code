class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) {
            return 1; // 1 is a pivot for a single number
        }

        long long totalSum = ((long long)n * (n + 1)) / 2; // Sum of integers from 1 to n
        long long leftSum = 0;

        for (int i = 1; i <= n; i++) {
            if (leftSum == totalSum - leftSum - i) {
                return i;
            }
            leftSum += i;
        }

        return -1; // If no pivot integer is found
    }
};
