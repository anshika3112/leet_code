class Solution {
public:
    void  maxProfitFinder(vector<int>&prices,int i,int&minPrice,int&maxPrice)
    {
        if(i==prices.size())return;
        if(prices[i]<minPrice)
        minPrice=prices[i];
        int tProfit=prices[i]-minPrice;
        if(tProfit > maxPrice)
        maxPrice=tProfit;
        maxProfitFinder(prices,i+1,minPrice,maxPrice);
    }
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        maxProfitFinder(prices,0,minPrice,maxProfit);
        return maxProfit;
    }
};
