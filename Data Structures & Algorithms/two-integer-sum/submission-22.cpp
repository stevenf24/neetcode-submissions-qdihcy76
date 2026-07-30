class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> result;

        for(int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];

            if(result.find(difference) != result.end())
                return {result[difference], i};

            result.insert({nums[i], i});
        }

        return {};
    }
};
