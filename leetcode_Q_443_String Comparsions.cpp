#include <vector>
#include <algorithm>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int index = 0, count = 1;
        char prev = chars[0];
        
        for (int i = 1; i < chars.size(); i++) {
            if (chars[i] == prev) {
                count++;
            } else {
                chars[index++] = prev;

                if (count > 1) {
                    string countStr = to_string(count);
                    for (char digit : countStr) {
                        chars[index++] = digit;
                    }
                }

                prev = chars[i];
                count = 1;
            }
        }

        chars[index++] = prev;

        if (count > 1) {
            std::string countStr = std::to_string(count);
            for (char digit : countStr) {
                chars[index++] = digit;
            }
        }

        return index;
    }
};
