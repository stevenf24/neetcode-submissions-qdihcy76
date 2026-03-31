class Solution {
public:
    int findMin(vector<int> &nums) {
        // Assume the first element in array is the the mininmum:
        int res = nums[0];

        // Two poiners to store the left and right sides of the array:
        int left = 0, right = nums.size() - 1;

        // Go through array:
        while(left <= right) {
            if(nums[left] < nums[right]) {
               res = min(res, nums[left]);
               break;
            }

            int middle = left + (right - left) / 2;
            res = min(res, nums[middle]);

            if(nums[middle] >= nums[left])
                left = middle + 1;
            else
                right = middle - 1;
        }

        return res;

    }
};
