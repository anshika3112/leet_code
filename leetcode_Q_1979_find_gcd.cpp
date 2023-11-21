class Solution {
public:
    int findGCD(std::vector<int>& nums) {
        int n = nums.size();
        int result = 0;

        // Find the minimum and maximum elements in nums
        int a = nums[0], b = nums[0];
        for (int i = 1; i < n; ++i) {
            if (nums[i] > b) b = nums[i];
            if (nums[i] < a) a = nums[i];
        }

        // Find GCD of a and b
        for (int i = 1; i <= a && i <= b; ++i) {
            if (a % i == 0 && b % i == 0) {
                result = i;
            }
        }
        return result;
    }
};
