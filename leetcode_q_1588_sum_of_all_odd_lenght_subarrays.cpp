class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for (int i = 0; i < n; ++i) {
            // Number of subarrays starting at i and their contribution
            int subarraysStartingHere = (i + 1) * (n - i);
            int oddSubarraysStartingHere = subarraysStartingHere / 2 + subarraysStartingHere % 2;

            // Contribution of arr[i] to the sum
            sum += (oddSubarraysStartingHere * arr[i]);
        }
        return sum;
    }
};
