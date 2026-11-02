class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Create a counter for the maximum profit you can make:
        int maxProfit = 0;

        // Create two pointers:
        int l = 0, r = 1;

        // Loop through array while r index is less than size of prices
        while(r < prices.size()) {
            // If value at prices[l] is less than prices[r], you make a profit;
            // you then determine if maxProfit at its current value is greater
            // than the current profit and store it as the max profit:
            if(prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                maxProfit = max(maxProfit, profit);
            }
            else
                // Update index value of l for r:
                l = r;

            // Increment index of r by 1:
            r++;
        }

        // Return the max profit:
        return maxProfit;
    }
};
