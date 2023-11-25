
class Solution {
public:
    int averageValue(std::vector<int>& nums) {
        int l = nums.size();
        int sum = 0;
        int k = 0;
        
        for (int i = 0; i < l; i++) {
            if ((nums[i] % 2 == 0) && (nums[i] % 3 == 0)) {
                sum += nums[i];
                k++;
            }
        }
        
        if (k == 0) {
            return 0; 
        }

        return (sum / k);
    }
};
