class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
       int year1, month1, day1, year2, month2, day2;
        sscanf(date1.c_str(), "%d-%d-%d", &year1, &month1, &day1);
        sscanf(date2.c_str(), "%d-%d-%d", &year2, &month2, &day2);
        std::map<int, int> daysInMonth = {
            {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
            {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}
        };
        int days1 = year1 * 365 + day1;
         for (int i = 1; i < month1; ++i) {
            days1 += daysInMonth[i];
        }
        if (month1 > 2 && ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0)) {
            days1 += 1; 
        } 
        int days2 = year2 * 365 + day2;
        for (int i = 1; i < month2; ++i) {
            days2 += daysInMonth[i];
        }
        if (month2 > 2 && ((year2 % 4 == 0 && year2 % 100 != 0) || year2 % 400 == 0)) {
            days2 += 1;
        }
        return abs(days2-days1);
    }
};
