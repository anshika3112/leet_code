class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
            if (digitSum(i) % 2 == 0) {
                count++;
            }
        }
        return count;
    }

private:
    int digitSum(int n) {
        int total = 0;
        while (n > 0) {
            total += n % 10;
            n /= 10;
        }
        return total;
    }
};
