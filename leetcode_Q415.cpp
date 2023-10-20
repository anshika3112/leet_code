class Solution {
public:
    string addStrings(string num1, string num2) {
        string add;
        int carry=0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        while(i>=0||j>=0||carry>0)
        {
            int digit1 = (i >= 0) ? num1[i] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;  // Calculate carry for the next iteration
            sum%=10;
            add.push_back('0' + sum);
             --i;
            --j;
        }
        std::reverse(add.begin(), add.end());
        return add;
    }
};
