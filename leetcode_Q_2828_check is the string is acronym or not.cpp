class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int l = words.size();
        if (s.length() != l) {
            return false; // Different lengths, not an acronym
        }
        for (int i = 0; i < l; i++) {
            if (toupper(words[i][0]) !=toupper(s[i])) { // Compare uppercase first letters
                return false;
            }
        }
        return true;
    }
};
