class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Stores the size of array
        int n = nums.size();

        // Create map that points value to index
        unordered_map <int, int> result;

        // Iterate through array
        for(int i = 0; i < n; i++) {
            // Difference will be the other value we need
            // in order to the add with the current value of array
            // to get the target.
            // In effect, this will also give us the pair for that value
            // to find the solution
            int diff = target - nums[i];

            if(result.find(diff) != result.end()) {
                return {result[diff], i};
            }

            result.insert({nums[i], i});
        }

        return {};
    }
};
