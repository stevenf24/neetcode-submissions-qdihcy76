class Solution {
public:
    int findMin(vector<int> &nums) {
        // Assume the first value of array is the smallest and store it:
        int res = nums[0];

        // Create index pointers for left and right side of array:
        int left = 0, right = nums.size() - 1;

        // Loop through array while left is less than or equal to right:
        while(left <= right) {

            // If value for left is less than value forright, res uses
            // min to determine smallest value:
            if(left < right)
                res = min(res, nums[left]);

            // Calculate middle. This will be done if the left value is
            // not less than right
            int middle = left + (right - left) / 2;

            // res will store value that is smaller: either its current
            // value or the value at the middle of array:
            res = min(res, nums[middle]);

            // If the middle value is greater than or equal to left value,
            // left will now be 1 more plus the middle index value; else,
            // right index value will be updated to value of middle minus
            // 1:
            if(nums[middle] >= nums[left])
                left = middle + 1;
            else
                right = middle - 1;
        }

        return res;
    }
};
