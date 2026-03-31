class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> indices;

        for(int i = 0; i < nums.size(); i++) {  
            // value stored in array is accessed and placed into hash map
            // then, the index is stored to hash map
            indices[nums[i]] = i;

        }

        for(int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            if(indices.count(difference) && indices[difference] != i)
                return {i, indices[difference]};
        }

        return {};
    }
};
