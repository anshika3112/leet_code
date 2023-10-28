class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int digit=0;
        while(n)
        {
           digit=n%10;
           sum=sum+digit;
           product=product*digit;
           n/=10;  
        }
        return (product-sum);
    }
};
