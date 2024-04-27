class Solution {
public:
    int scoreOfString(string s) {
        int x,sum=0,i;
        for(i=1;i<s.size();i++)
        {
            x=abs(s[i-1]-s[i]);
            sum+=x;
        }
        return sum;
    }
};
