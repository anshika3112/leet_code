class Solution {
public:
    int arraySign(vector<int>& nums) {
        double long product=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
          product*=nums[i];
        }
        if(product==0)
        return 0;
        else if(product>0)
        return 1;
        else
        return -1;
    }
};
