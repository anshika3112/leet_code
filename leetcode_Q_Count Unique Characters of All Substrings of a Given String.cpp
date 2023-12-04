class Solution {
public:
    int uniqueLetterString(string s) {
         int i, count, prev, pos, n = s.size(), ans = 0;
        for(char ch = 'A'; ch <= 'Z'; ch++)
        {
            count = 0;
            prev = -1;
            pos = -1;
            for(int i = 0; i < n; i++)
            {
                if(s[i] == ch)
                {
                    count++;
                    prev = pos;
                    pos = i;
                }
                if(count == 1)
                    ans += pos + 1;
                else
                    ans += pos - prev;
            }
        }
        return ans; 
    }
};
