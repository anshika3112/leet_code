class Solution {
public:
    int calcDigitSum(int num) {
        int digitSum = 0;
        while (num > 0) {
            digitSum += num % 10; 
            num /= 10;
        }
        return digitSum;
    }

    int differenceOfSum(std::vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        for (int num : nums) {
            elementSum += num; 
            digitSum += calcDigitSum(num); 
        }

        return std::abs(elementSum - digitSum);
    }
};
