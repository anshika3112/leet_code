class Solution {
public:
    int arrangeCoins(int n) {
    int i;
    for(i=1;i<n;i++)
    {
        n=n-i;
        if(n>=i+1)
        continue;
        else
        break;
    }
    return i;
    }
};
