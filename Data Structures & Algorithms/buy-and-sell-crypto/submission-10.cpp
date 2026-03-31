class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Create pointers for the first two indices:
        // - l for buying
        // - r for selling
        int l = 0, r = 1;

        // Counter will store the max profit:
        int maxProfit = 0;

        // Go through array:
        while(r < prices.size()) {
                if(prices[l] < prices[r]) {
                        int profit = prices[r] - prices[l];
                        maxProfit = max(maxProfit, profit);
                }
                else {
                        // L takes r's index if the above condition fails.
                        // This means that prices[l] is greater than prices[r]:
                        l = r;
                }

                // Increment r to determine if next price is viable for selling.
                // Will increment until r index exceeds array size:
                r++;
        }

        // Return the maximum profit price after all possible sales:
        return maxProfit;
    }
};
