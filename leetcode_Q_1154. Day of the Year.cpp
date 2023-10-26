#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>

class Solution {
public:
    int dayOfYear(std::string date) {
        // Days in each month (non-leap year)
        std::vector<int> daysInMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Parse input date
        int year, month, day;
        sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
        
        // Check for leap year and update February days
        if (isLeapYear(year)) {
            daysInMonth[2] = 29;
        }
        
        // Calculate day number
        int dayOfYear = day;
        for (int i = 1; i < month; ++i) {
            dayOfYear += daysInMonth[i];
        }
        
        return dayOfYear;
    }
    
    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    Solution solution;
    std::string date = "2023-10-26";
    int dayNumber = solution.dayOfYear(date);
    std::cout << "Day number of the year: " << dayNumber << std::endl;
    return 0;
}
