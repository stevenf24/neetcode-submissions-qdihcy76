class Solution {
public:
    int findMin(vector<int> &nums) {
        int res = nums[0];

        int left = 0, right = nums.size() - 1;

        while(left <= right) {
            // If left is less than middle, store it to res:
            if(nums[left] < nums[right]) {
                res = min(res, nums[left]);
                break;
            }

            // Calculate middle:
            int middle = left + (right - left) / 2;
            res = min(res, nums[middle]);

            // Determine if the middle is greater than left,
            // left index is changed:
            if(nums[middle] >= nums[left])
                left = middle + 1;
            else
                right = middle - 1;
        }

        return res;
    }
};
