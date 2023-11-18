class Solution {
public:
    int daysBetweenDates(std::string date1, std::string date2) {
        

        int year1, month1, day1, year2, month2, day2;
        sscanf(date1.c_str(), "%d-%d-%d", &year1, &month1, &day1);
        sscanf(date2.c_str(), "%d-%d-%d", &year2, &month2, &day2);

        int days1 = daysSinceEpoch(year1, month1, day1);
        int days2 = daysSinceEpoch(year2, month2, day2);

        return std::abs(days2 - days1);
    }

private:
    int daysSinceEpoch(int year, int month, int day) {
        std::map<int, int> daysInMonth = {
            {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
            {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}
        };
        int days = day - 1;

        for (int y = 1970; y < year; ++y) {
            days += isLeapYear(y) ? 366 : 365;
        }

        for (int m = 1; m < month; ++m) {
            days += daysInMonth[m];
            if (m == 2 && isLeapYear(year)) {
                days += 1; // Leap year adjustment for February
            }
        }

        return days;
    }

    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
};


