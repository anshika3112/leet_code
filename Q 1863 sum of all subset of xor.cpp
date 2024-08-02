class Solution {
public:
    int subsetXORSum(std::vector<int>& nums) {
        int n = nums.size();
        int totalSubsets = 1 << n; 
        
        int xorSum = 0;
        
        for (int i = 0; i < totalSubsets; ++i) {
            int subsetXOR = 0;
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    subsetXOR ^= nums[j]; 
                }
            }
            xorSum += subsetXOR; 
        }
        return xorSum;
    }
};

