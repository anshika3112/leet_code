class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance = mainTank * 10; // Calculate initial distance based on mainTank's capacity
        
        while (mainTank >= 5) {
            if (additionalTank >= 1) {
                mainTank -= 4; // Deduct 4 liters (5 - 1) from the mainTank
                additionalTank -= 1; // Deduct 1 liter from the additionalTank
                distance += 10; // Increase the distance by 10 km (mileage)
            } else {
                break; // Stop transferring fuel if additionalTank is insufficient
            }
        }
        
        return distance;
    }
};
