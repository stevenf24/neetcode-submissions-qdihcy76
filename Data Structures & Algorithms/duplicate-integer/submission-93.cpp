class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0)
            return false;
        
        unordered_set<int> res;
        vector<int>::iterator it;

        for(it = nums.begin(); it != nums.end(); it++) {
            if(res.find(*it) != res.end())
                return true;

            res.insert(*it);
        }

        return false;
    }
};