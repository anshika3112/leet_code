class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int > l(nums.size(),0);
         vector<int > r(nums.size(),0);
         for(int i=1;i<nums.size();++i)
         {
           l[i]=l[i-1]+nums[i-1];
         }
         for(int i=nums.size()-2;i>=0;--i)
         {
           r[i]=r[i+1]+nums[i+1];
         }
         for(int i=0;i<nums.size();i++)
         {
           if(l[i]==r[i])
           return i;
         } 
       return -1;
    }
};
