class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> result;

        for(int i = 0; i < nums.size(); i++) {
            result[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            if(result.count(difference) && result[difference] != i)
                return {i, result[difference]};
        }

        return {};
    }
};
