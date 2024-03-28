class Solution {
public:
    string finalString(string s) {
        int l=s.length();
        string r="";
        for(int i=0;i<l;i++)
        {
            if(s[i]=='i')
             reverse(r.begin(), r.end());
            else
            r+=s[i];
        }
        return r;
    }
};
