class Solution {
public:
    string addBinary(string a, string b) {
        int x = a.length();
        int y = b.length();
        int maxLength = max(x, y);
    
     if (x < maxLength) {
            a = string(maxLength - x, '0') + a;
        }
        if (y < maxLength) {
            b = string(maxLength - y, '0') + b;
        }
        string result = "";
        int carry = 0;

        for (int i = maxLength - 1; i >= 0; i--) {
            int bitA = a[i] - '0';
            int bitB = b[i] - '0';
             int sum = bitA + bitB + carry;
            result = to_string(sum % 2) + result;
            carry = sum / 2;
        }
        if(carry)
        result="1"+result;

      return result;
    }
};
