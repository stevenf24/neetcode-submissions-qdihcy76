class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> found;

        for(int i = 0; i < nums.size(); i++) {

            //int index = nums[i];

            if(found.count(nums[i]))
                return true;
            
            found.insert(nums[i]);
        }
        return false;
    }
};