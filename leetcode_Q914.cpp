class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> count;
        for (int num : deck) {
            count[num]++;
        }
        int gcdValue = 0;
        for (const auto& pair : count) {
            gcdValue = gcd(gcdValue, pair.second);
            if (gcdValue == 1) {
                return false;
            }
        }
        return gcdValue >= 2;
    }
};
