class Solution {
public:
    int maxProfit(vector<int>& price) {

        int maxprofit = 0;
        int bestprice = price[0];

        for (int i = 1; i < price.size(); i++) {
            if (price[i] > bestprice) {
                maxprofit = max(maxprofit, price[i] - bestprice);
            }

            bestprice = min(bestprice, price[i]);
        }
        return maxprofit;
    }
};