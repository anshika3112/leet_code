class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), key = nums[0], c=0;
        for(int i=0;i<n;i++)
        {
            if(c == 0)  key = nums[i];
            if(nums[i] == key)  c++;
            else c--;
        }
        return key;
    }
};
