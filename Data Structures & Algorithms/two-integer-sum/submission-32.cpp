class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> res;

        for(int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            
            if(res.find(difference) != res.end()) {
                return {res[difference], i};
            }

            res.insert({nums[i], i});
        }

        return {};
    }
};
