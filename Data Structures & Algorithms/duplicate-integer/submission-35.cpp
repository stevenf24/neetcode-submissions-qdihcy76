class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> result;

        for(int i : nums) {
            if(result.contains(i))
                return true;

            result.insert(i);
        }

        return false;
    }
};