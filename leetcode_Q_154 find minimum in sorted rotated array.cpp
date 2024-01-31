class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int ans=nums[0];
        while(s<=e){
            if(nums[s]>=nums[e]){
                if(e-1>=0 && nums[e]<nums[e-1])
                    return nums[e];
                e--;
            }
            else
            s++;
        }
        return ans;
    }
};
