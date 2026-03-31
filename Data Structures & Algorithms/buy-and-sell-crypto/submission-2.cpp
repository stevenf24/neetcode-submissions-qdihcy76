class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Create two pointers:
        // - left for buying
        // - right for selling
        // They will start at the first two elements of array:
        int l = 0, r = 1;

        // Counter will store the maximum profit:
        int maxProfit = 0;

        // While loop will go through array and checks
        // if right pointer is less than the size of array:
        while(r < prices.size()) {
                if(prices[l] < prices[r]) {
                        int profit = prices[r] - prices[l];
                        maxProfit = max(maxProfit, profit);
                }
                else
                        l = r;
                r++;
        }

        return maxProfit;
    }
};
