
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string numStr = to_string(num);
        int count = 0;

        for (int i = 0; i <= numStr.length() - k; ++i) {
            string sub = numStr.substr(i, k);
            int subNum = stoi(sub);

            if (subNum != 0 && num % subNum == 0) {
                ++count;
            }
        }

        return count;
    }
};

