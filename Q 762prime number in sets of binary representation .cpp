class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        int num;
        for(num=left;num<=right;num++)
        {
            int setbits=0;
            int n=num;
            while(n>0)
            {
                setbits+=n%2;
                n/=2;
            }
            if(isPrime(setbits))
            ++count;
        }
        return count;
    }
};
