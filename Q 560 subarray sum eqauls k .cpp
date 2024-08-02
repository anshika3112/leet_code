class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
           sum+=nums[i];
           int remove=sum-k;
           count+=mp[remove];
           mp[sum]+=1;
        }
        return count;
    }
};
