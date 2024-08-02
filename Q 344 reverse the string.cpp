        class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int i=0;
        while(i<s.size()/2)
        {
            char temp=s[i];
            s[i]=s[n];
            s[n]=temp;
            i++;
            n--;
        }
        
    }
};
