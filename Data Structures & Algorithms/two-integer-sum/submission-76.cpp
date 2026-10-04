class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> res;

        int pos = 0;

        for(int c : nums) {
            int diff = target - c;

            if(res.find(diff) != res.end())
                return {res[diff], pos};

            res.insert({c, pos});
            pos++;
        }

        return {};

    }
};
