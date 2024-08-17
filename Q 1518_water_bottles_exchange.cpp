class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result = numBottles;
        
        while (numBottles >= numExchange) {
            int exchanged = numBottles / numExchange;
            result += exchanged;
            numBottles = exchanged + (numBottles % numExchange);
        }
        
        return result;
    }
};
