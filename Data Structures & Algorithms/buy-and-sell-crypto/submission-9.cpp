class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Create pointers for the first two indices:
        // - l for buying
        // - r for selling
        int l = 0, r = 1;

        // Counter will store the max profit:
        int maxProfit = 0;

        // Go through array
        while(r < prices.size()) {
                if(prices[l] < prices[r]) {
                        int profit = prices[r] - prices[l];
                        maxProfit = max(maxProfit, profit);
                }
                else {
                        l = r;
                }
                r++;
        }

        return maxProfit;
    }
};
