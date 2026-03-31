class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Return false if size of nums is false
        if(nums.size() == 0)
            return false;

        // The set is used to remember which numbers
        // we have already seen.
        // It stores unique values only 
        unordered_set<int> result;

        // Go through array
        for(int i : nums) {
            // The set isbeing used as a "seen before?" checker
            // Result is a memory of values already seen.
            // If the result is found, than it is true.
            // If the result is not found, than it is inserted into set
            if(result.contains(i))
                return true;

            // When the above condition is not true, then you
            // keep inserting and go through the rest of the array
            // until you find duplicates or not
            result.insert(i);

            
        }

        // Return false if no duplicates were found
        return false;
    }
};