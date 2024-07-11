class Solution {
public:
    int countBinarySubstrings(string s) {
        char anchor;
        int sums = 0, i = 0, j = 0, numa = 0, total = 0, next = 0;

        while (i < s.length()){
            anchor = s[i];
            total = 0;

            numa = 1;
            for (j = i + 1; j < s.length(); ++j){
                if (s[j] == anchor) numa++;
                else break;
            }
            next = j;
            int range = j + numa;
            for (; j < range && j < s.length(); ++j){
                if (s[j] != anchor) ++total;
                else break;
            }
            sums += total;
            i = next;
        }
        return sums;
    }
};
