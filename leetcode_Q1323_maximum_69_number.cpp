class Solution {
public:
    int maximum69Number (int num) {
        int max=num;
        int pos=1;
        int original=num;
        while(num>0)
        {
         if(num%10==6)
         max=original+3*pos;
          num /= 10;
            pos *= 10;
        }
        return max;
    }
};
