
class Solution {
public:
    std::vector<double> convertTemperature(double celsius) {
        std::vector<double> ans(2); // Initialize a vector of size 2
        
        ans[0] = celsius + 273.15; // Store the Celsius to Kelvin conversion in index 0
        ans[1] = celsius * 1.80 + 32.00; // Store the Celsius to Fahrenheit conversion in index 1
        
        return ans;
    }
};
