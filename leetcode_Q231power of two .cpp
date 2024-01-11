class Solution {
public:
    bool isPowerOfTwo(int n) {
        int t=n;
        int i;
        int k;
        if(n<0)
        {
          return false;
        }
        else if(n==0)
        return false;
        else if (n==1)
        return true;
        else
        {
        while(n>0)
        {
            if(n%2==0)
            {
            n/=2;
           
            }
            else if(n==1){
            n=0;
            return true;
            }
            else 
            {
            return false;
            break;
            }
        }
        return true;
        }
    }
};
