class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int carry = 1;  // Initialize carry to 1 for adding one.
    int n = digits.size();
    
    // Traverse the vector from right to left and add one.
    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;  // Store the new digit.
        carry = sum / 10;     // Update carry for the next iteration.
    }
    
    // If there's still a carry after the loop, insert it at the beginning.
    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }
    
    return digits;
}
};
