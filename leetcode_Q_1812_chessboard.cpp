
class Solution {
public:
    bool squareIsWhite(std::string coordinates) {
        int letter = coordinates[0] - 'a' + 1; 
        int number = coordinates[1] - '0'; 
        return (letter + number) % 2 != 0;
    }
};
