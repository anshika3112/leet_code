class Solution {
public:
string convertToTitle(int columnNumber) 
{
    string columnTitle = "";
    map<int, char> intToChar;
    for (int i = 1; i <= 26; ++i) {
        intToChar[i] = 'A' + i - 1;
    }

    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;
        char letter = intToChar[remainder + 1]; // Adding 1 to remainder to map 0 to 'A'
        columnTitle = letter + columnTitle;
        columnNumber = (columnNumber - 1) / 26;
    }

    return columnTitle;
}

    
         
};
