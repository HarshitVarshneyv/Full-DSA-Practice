// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxProfit = 0 , bestBuy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit , prices[i] - bestBuy);
            }

            bestBuy = min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};