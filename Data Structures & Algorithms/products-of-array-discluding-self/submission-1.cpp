/*
    We want to multiply every value except the current i.
    
    Division would be easy and b/c we would get product of everything and then divide

    Have a predix

    
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Store the size of array
        int n = nums.size();

        // create array that is of size n,
        // and make all values 1
        vector<int> res(n, 1);

        // loop through array n times - the size of array
        for(int i = 1; i < n; i++) {
            // Current value of res is the value of the curent
            // value of array
            res[i] = res[i-1] * nums[i-1];
        }

        // Postfix value set to 1
        int postfix = 1;

        // Loop through array in descending order:
        for(int i = n - 1; i >= 0; i--) {
            // Product of current value is current value
            // by postfix value
            res[i] *= postfix;

            // Product of new postfix value is the current value
            // times the current value of array
            postfix *= nums[i];
        }

        return res;
    }
};
