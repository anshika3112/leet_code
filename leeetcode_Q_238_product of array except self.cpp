#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n, 1);

        int product = 1;
        int numZeros = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                product *= nums[i];
            } else {
                numZeros++;
            }
        }

        if (numZeros == 1) {
            for (int i = 0; i < n; i++) {
                result[i] = (nums[i] == 0) ? product : 0;
            }
        } else if (numZeros > 1) {
            // All elements will be zero if there are multiple zeros.
            result.assign(n, 0);
        } else {
            for (int i = 0; i < n; i++) {
                result[i] = product / nums[i];
            }
        }

        return result;
    }
};
