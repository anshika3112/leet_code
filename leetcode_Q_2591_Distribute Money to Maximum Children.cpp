class Solution {
public:
    int distMoney(int k, int n) {
        for(int i = 0; i < k*n; i++){}
        if(k<n||(n==1&&k==4))return -1;
        if(k==n*8)return n;
        if(k>n*8)return n-1;
        if(k<=n+6){
            return 0;
        }
        int x = 0,y=0;
        while(n){
            // cout<<k<<" ";
            if(k>=n+7){
                k -= 8;
                x++;
            }
            else{
                k--;
                y++;
            }
            n--;
        }
        // cout<<k<<" ";
        if(k==3&&y==1)x -= 1;
        return x;
    }
};
