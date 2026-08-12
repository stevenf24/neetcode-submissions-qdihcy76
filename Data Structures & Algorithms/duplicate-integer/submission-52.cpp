class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0)
            return false;

        unordered_set<int> res;


        for(int i = 0; i < nums.size(); i++) {
            if(res.contains(nums[i])) {
                return true;
            }

            res.insert(nums[i]);
        }

        return false;
    }
};