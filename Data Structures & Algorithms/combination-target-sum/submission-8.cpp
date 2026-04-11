class Solution {
public:
    // Create an array at global level
    // that will store the potential combinations:
    vector<vector<int>> res;

    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        dfs(0, {}, 0, nums, target);
        return res;

    }
        

    void dfs(int i, vector<int> current, int total, vector<int>& nums,
                            int target) {
        if(total == target) {
            res.push_back(current);
            return;
        }

        for(int j = i; j < nums.size(); j++) {
            if(total + nums[j] > target) {
                return;
            }

            current.push_back(nums[j]);

            dfs(j, current, total + nums[j], nums, target);

            current.pop_back();
        }
        
    }

    
};
