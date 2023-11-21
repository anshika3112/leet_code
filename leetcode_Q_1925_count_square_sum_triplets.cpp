class Solution {
public:
    int countTriples(int n) {
        int result = 0;
        for (int a = 1; a <= n; ++a) {
            for (int b = a + 1; b <= n; ++b) {
                int c_squared = a * a + b * b;
                int c = sqrt(c_squared);
                if (c <= n && c * c == c_squared) {
                    result+=2;
                }
            }
        }
        return result;
    }
};

