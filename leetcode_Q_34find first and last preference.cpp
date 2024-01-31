#include <vector>

class Solution {
public:
    vector<int> binary_search(vector<int>& nums, int target) {
        vector<int> ans{-1, -1};
        int s = 0;
        int e = nums.size() - 1;
        int mid = 0;

        // Find the left bound
        while (s <= e) {
            mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                ans[0] = mid;
                e = mid - 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        // Reset the search boundaries
        s = 0;
        e = nums.size() - 1;

        // Find the right bound
        while (s <= e) {
            mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                ans[1] = mid;
                s = mid + 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return binary_search(nums, target);
    }
};
