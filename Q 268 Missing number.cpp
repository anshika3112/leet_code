class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int esum=n*(n+1)/2;
        int a=0;
        for (int num : nums) {
            a +=num;
        }
        return esum-a;
     }
};
