class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        return 100-((purchaseAmount%10>=5)?((purchaseAmount+9)/10)*10:(purchaseAmount/10)*10);
    }
};
