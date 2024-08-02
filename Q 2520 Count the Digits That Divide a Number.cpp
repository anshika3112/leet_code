class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int result=0;
        while(n>0)
        {
            int digit=n%10;
            if(num%digit==0)
            {
                result++;
            }
            n/=10;
           
        }
         return result;
    }
};
