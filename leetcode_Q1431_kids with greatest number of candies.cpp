class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        for (int i = 0; i < candies.size(); i++) {
            int targetCandies = candies[i] + extraCandies;
            bool canHaveGreatestCandies = true;

            for (int j = 0; j < candies.size(); j++) {
                if (i != j && targetCandies < candies[j]) {
                    canHaveGreatestCandies = false;
                    break;
                }
            }

            ans.push_back(canHaveGreatestCandies);
        }
        return ans;
    }
};
