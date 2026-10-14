class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> what;

        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];

            if(what.find(diff) != what.end())
                return {what[diff], i};
            
            what.insert({nums[i], i});
        }

        return {};
    }
};
