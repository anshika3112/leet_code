class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long int max1, max2, max3;
        max1 = max2 = max3 = numeric_limits<long>::min();

        for(int v: nums)
        {
            if(v > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = v;
            }
            else if(v > max2 && v < max1)
            {
                max3 = max2;
                max2 = v;
            }
            else if(v > max3 && v < max2)
                max3 = v;
        }

        return (max3 != numeric_limits<long>::min())? max3: max1;
    }
};
