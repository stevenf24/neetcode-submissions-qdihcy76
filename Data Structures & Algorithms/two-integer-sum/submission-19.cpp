class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create unordered map that will store the current value
        // of array and its index:
        unordered_map<int, int> result;

        // Go through the array:
        for(int i = 0; i < nums.size(); i++) {
            // Intuition: You want to find the two numbers in array that add to
            // the target. A clever way to find a number would be to subtract the current
            // index value from the target. This way, we can have the value we need
            // to get the target stored. As we traverse through the array, we'll store
            // the values and their indices to the hash map. If the differnce is found
            // for the current value, we will eventually return their indices
            
            // Store the difference:
            int difference = target - nums[i];

            // Checks if the difference is found and not at, the
            // end of array, we return the indices:
            if(result.find(difference) != result.end())
                // return smallest index and the current index, in that order
                // (smallestIndex, largestIndex)
                return {result[difference], i};
            
            // We store the current value and its index if the difference
            // was not found:
            result.insert({nums[i], i});
        }

        // Return an empty answer if no values were found to add up to
        // the target:
        return {};
    }
};
