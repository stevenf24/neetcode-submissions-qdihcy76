class Solution {
public:
    int findMin(vector<int> &nums) {
        int res = nums[0];

        int l = 0, r = nums.size() - 1;

        while(l <= r) {
            if(nums[l] < nums[r])
                res = min(res, nums[l]);
        
            int middle = l + (r - l) / 2;
            res = min(nums[middle], res);

            if(nums[middle] >= nums[l])
                l = middle + 1;
            else
                r = middle - 1;
        }
        
        return res;
    }
};
