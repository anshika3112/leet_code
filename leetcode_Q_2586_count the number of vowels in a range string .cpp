class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++)
        {
            string s=words[i];
            int a = s.length();
            if( (s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u') && (s[a-1]=='a'||s[a-1]=='e'||s[a-1]=='i'||s[a-1]=='o'||s[a-1]=='u'))
            {
                c++;
            }
            
        }
        return c;
    }
};
