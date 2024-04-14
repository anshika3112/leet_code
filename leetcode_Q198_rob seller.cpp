class Solution {
public:
    int rob(vector<int>& nums) {
        int rob=0;
        int norob=0;
        for(int i=0;i<nums.size();i++){
            int newrob=norob+nums[i];
            int newrobo=max(norob,rob);
            rob=newrob;
            norob=newrobo;
        }
        return max(rob,norob);
    }
};
