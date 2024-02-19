class Solution {
public:
    int finalValueAfterOperations(std::vector<std::string>& operations) {
        int a = 0;
        for(auto &x : operations) {
            if(x == "X--" || x == "--X") {
                a--;
            } else {
                a++;
            }
        }
        return a;
    }
};
