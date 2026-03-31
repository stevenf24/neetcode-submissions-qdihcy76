class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Create pointers for the first two indices:
        // - 'l' for buying
        // - 'r' for selling
        int l = 0, r = 1;
        
        // Create counter that stores max profit:
        int maxProfit = 0;

        // Go through array:
        while(r < prices.size()) {
                // Condition checks if the buying price is less than the
                // selling price:
                if(prices[l] < prices[r]) {
                        // Create variable that stores the profit:
                        int profit = prices[r] - prices[l];
                        // 'maxProfit' stores the maximum between the 
                        // calculated profit and the buying price:
                        maxProfit = max(maxProfit, profit);
                }
                else {
                        // l' takes r's index if the above condition fails.
                        // This means that prices[l] is greater than prices[r]:
                        l = r;
                }

                // Increment r to determine if next price is viable for selling.
                // Will increment until r index exceeds array size:
                r++;
        }

        // Return the maximum profit for all possible sales:
        return maxProfit;
    }
};
