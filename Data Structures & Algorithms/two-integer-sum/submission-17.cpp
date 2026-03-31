class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Stores the size of array
        int n = nums.size();

        // Create an empty map that will point value to index
        unordered_map <int, int> result;

        // Iterate through array
        for(int i = 0; i < n; i++) {
            // Difference will be the other value we need
            // in order to the add with the current value of array
            // to get the target.
            // In effect, this will also give us the pair for that value
            // to find the solution
            int diff = target - nums[i];

            // Checks if difference is in the map if it is not found
            // 'find' lets us check whether a key exists without
            // accidentally creating it
            if(result.find(diff) != result.end()) {
                // Returns the two indices that make the
                // target sum
                // ** The notation 'result[diff]' is not accessing the value
                // ** of the array, it is accessing the index, since the map
                // ** has the value of the array pointing to its corresponding
                // ** index
                return {result[diff], i};
            }

            // This stores the value and its index into the map
            // This only occurs if the difference wasn't found
            result.insert({nums[i], i});
        }

        // Returns an empty pair if no indices in the array, whose values
        // would add up to the target, are not found
        return {};
    }
};
