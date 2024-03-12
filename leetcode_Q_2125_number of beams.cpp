class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int n=bank.size();
        int first=count(bank[0].begin(),bank[0].end(),'1');
        for(int i=1;i<n;i++)
        {
            int second=count(bank[i].begin(),bank[i].end(),'1');
            ans=ans+first*second;
            if(second!=0)
            {
                first=second;
            }
        }
        return ans;
    }
};
