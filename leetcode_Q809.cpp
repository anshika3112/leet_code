#include <vector>
#include <algorithm>

class Solution {
public:
    int smallestRangeI(std::vector<int>& nums, int k) {
        int min_val = *min_element(nums.begin(), nums.end());
        int max_val = *max_element(nums.begin(), nums.end());
        
        int diff = max_val - min_val - 2 * k;
        return diff > 0 ? diff : 0;
    }
};
