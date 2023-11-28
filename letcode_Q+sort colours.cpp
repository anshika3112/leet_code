class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
       int index=0;
       int left=0;
       int right=n-1;
       while(index<=right)
       {
           if(nums[index]==0){
             int temp=nums[index];
             nums[index]=nums[left];
             nums[left]=temp;
              left++;
              index++;
           }
           else if(nums[index]==2)
           {
                 int temp=nums[index];
             nums[index]=nums[right];
             nums[right]=temp;
                 right--;
           }
           else
           {
               index++;
           }
       }   
    }
};
