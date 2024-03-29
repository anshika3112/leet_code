class Solution {
public:
    string freqAlphabets(string s) {
        map<string, string> mp1;
        for (char ch = 'a'; ch <= 'z'; ch++) {
           
            mp1[to_string(ch - 'a' + 1)] = ch;
        }
        int n = s.length();
        string ans;
        int i = 0;
        while (i < n) {
           if (i + 2 < n && s[i + 2] == '#') {
                ans += mp1[s.substr(i, 2)];
                i = i + 3;
            } else {
                ans += mp1[s.substr(i, 1)];
                i++;
            } 
        }
        return ans;
    }
};
