class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Return false if size of nums is false
        if(nums.size() == 0)
            return false;

        // Unordered set to store how many times each
        // element may appear more than once
        unordered_set<int> result;

        for(int i : nums) {
            if(result.contains(i))
                return true;
            
            result.insert(i);
        }

        return false;
    }
};