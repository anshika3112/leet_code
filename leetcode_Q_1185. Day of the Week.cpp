class Solution {
public:
    std::string dayOfTheWeek(int day, int month, int year) {
        std::map<int, std::string> result = {
            {0, "Saturday"}, {1, "Sunday"}, {2, "Monday"}, {3, "Tuesday"},
            {4, "Wednesday"}, {5, "Thursday"}, {6, "Friday"}
        };

        if (month < 3) {
            month += 12;
            year--;
        }

        int k = year % 100;
        int j = year / 100;

        int dayOfWeek = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

        return result[dayOfWeek];
    }
};
