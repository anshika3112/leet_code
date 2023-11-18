class Solution {
public:
    int xorOperation(int n, int start) {
        int num[20];
        int ans;
        for(int i=0;i<n;i++)
        {
            num[i]=start+2*i;
        }
        for(int i=0;i<n;i++)
        {
            ans=ans^num[i];
        }
        return ans;
    }
};
