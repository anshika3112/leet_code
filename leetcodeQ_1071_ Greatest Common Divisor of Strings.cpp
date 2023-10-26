class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            // If the concatenation of the strings doesn't match in both orders, no common factor exists
            return "";
        }
        
        // Find the greatest common divisor substring using Euclidean algorithm
        return str1.substr(0, gcd(str1.length(), str2.length()));
    }
    
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
