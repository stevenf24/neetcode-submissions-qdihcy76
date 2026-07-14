class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0) {
            return false;
        }

        std::unordered_set<int> result;
        

        for(int i = 0; i < nums.size(); i++) {
            if(result.contains(nums[i])) {
                return true;
            }

            result.insert(nums[i]);
        }

        return false;
    }
};