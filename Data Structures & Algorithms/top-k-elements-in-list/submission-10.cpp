class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> res;
        vector<vector<int>> freq(nums.size() + 1);

        for(int n : nums) {
            res[n] = 1 + res[n];
        }

        for(const auto& entry : res) {
            freq[entry.second].push_back(entry.first);
        }

        vector<int> result;

        for(int i = freq.size() - 1; i > 0; --i) {
            for(int n : freq[i]) {
                result.push_back(n);

                if(result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
