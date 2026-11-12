class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        int l = 0, r = 1;

        while(r < prices.size()) {
            int profit = prices[r] - prices[l];

            if(prices[l] < prices[r]) {
                maxProfit = max(maxProfit, profit);
            }
            else
                l = r;
            
            r++;
        }

        return maxProfit;
    }
};
