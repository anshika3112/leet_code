class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int a=0;
        int d=0;
        int n=x;
        while(x>0)
        {
            a=x%10;
            x/=10;
            d=d+a;
        }
        if(n%d==0)
        return d;
        else
        return -1;
    }
};
