class Solution {
public:
    int fib(int n) {
        long long a=0,b=1;
        long long sum=0;
        if(n==0)
        return 0;
        else if(n==2||n==1)
        return 1;
        else
        {
         while(n-1)
         {
            sum=a+b;
            n--;
            a=b;
            b=sum;
         }
        }
        return sum;
    }
};
