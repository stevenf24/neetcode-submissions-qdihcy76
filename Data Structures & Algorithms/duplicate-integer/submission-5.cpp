class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> found;

        for(int i = 0; i < nums.size(); i++) {

            int index = nums[i];

            if(found.count(index))
                return true;
            
            found.insert(index);
        }
        return false;
    }
};