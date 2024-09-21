class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n =num.size();
        int carry=0;
        int i=n-1;
        vector<int>result;
         while (i >= 0 || k > 0 || carry) {
            int x = (i >= 0) ? num[i] : 0;
            int y = (k > 0) ? k % 10 : 0;

            int sum = x + y + carry;
            carry = sum / 10;

            result.insert(result.begin(), sum % 10); 
            if (i >= 0) {
                i--;
            }
            if (k > 0) {
                k /= 10;
            }
        }
        return result;
    }
};
