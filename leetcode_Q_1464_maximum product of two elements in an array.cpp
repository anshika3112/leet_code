class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMax  = -1;
        int secondMax = -1;
        for(auto &ele : nums){
            if(ele > firstMax) {
                secondMax = firstMax;
                firstMax  = ele;
            }
            else if(ele > secondMax) secondMax = ele;
        }
        return (firstMax - 1) * (secondMax - 1);
    }
};
