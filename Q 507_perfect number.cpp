class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num<=1)return false;
       int sum=1;
       int i=1;
       for(i=2;i*i<=num;i++)
       {
           if(num%i==0){
           sum=sum+i;
            if (i != num / i) {
            sum += num / i;
            }
       } 
       }
       return sum==num;
    }
};
