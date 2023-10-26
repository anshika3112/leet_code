class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people, 0);
        int candyToGive = 1;
        while (candies > 0) {
            for (int i = 0; i < num_people; ++i) {
                if (candies >= candyToGive) {
                    result[i] += candyToGive;
                    candies -= candyToGive;
                } else {
                    result[i] += candies;
                    candies = 0;
                    break;
                }
                candyToGive++;
            }
        }
        return result;
    }
};
