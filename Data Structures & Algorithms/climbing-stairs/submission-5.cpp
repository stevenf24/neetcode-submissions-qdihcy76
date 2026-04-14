class Solution {
public:
    int climbStairs(int n) {
        // Check if n is less than or equal to 2, the second fibonaci
        // value:
        if(n <= 2)
            return n;

        // Create an array (vector) that will be of size n + 1:
        vector<int> dp(n+1);

        // Base cases for fibonacci sequence:
        dp[0] = 1;
        dp[1] = 1;

        // Iterate through 
        for(int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
};
