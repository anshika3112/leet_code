class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int digit=0;
            while(nums[i]>0)
            {
                nums[i]/=10;
                digit++;
            }
            if (digit%2==0)
            count++;
        }
        return count;
    }
};
