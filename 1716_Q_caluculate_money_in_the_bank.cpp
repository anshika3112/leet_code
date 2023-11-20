class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int base = 1; // Initial amount for Monday

        for (int day = 1; day <= n; ++day) {
            sum += base + (day - 1) % 7; // Increment by the base amount and the additional daily increment
            if (day % 7 == 0) {
                base++; // Increment the base amount for the next week
            }
        }

        return sum;
    }
};
