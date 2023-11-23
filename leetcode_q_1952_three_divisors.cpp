class Solution {
public:
    bool isThree(int n) {
        int k=0,i;
        if(n<4)
        return false;
        int root = sqrt(n);
        return root * root == n && isPrime(root);
        
    }
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
};
