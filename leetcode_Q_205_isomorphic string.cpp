class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool istmapped[256] = {false};

        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] == 0 && !istmapped[t[i]]) {
                hash[s[i]] = t[i];
                istmapped[t[i]] = true;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (char(hash[s[i]]) != t[i])
                return false;
        }

        return true;
    }
};