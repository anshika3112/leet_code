#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true; // Found a duplicate
            }
            seen.insert(num); // Add the element to the set
        }
        
        return false; // No duplicates found
    }
};
