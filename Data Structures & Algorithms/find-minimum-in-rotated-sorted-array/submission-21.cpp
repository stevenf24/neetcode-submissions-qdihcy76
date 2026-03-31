class Solution {
public:
    int findMin(vector<int> &nums) {
        // Assume first element is the minimum:
        int res = nums[0];

        // Create two pointers for the left and right side of the array:
        int left = 0, right = (nums.size() - 1);

        // Loop through array as long as left is less than right:
        while(left <= right) {
            // If 'left' is less than 'right', compare first element with left:
            if(nums[left] < nums[right]) {
                res = min(res, nums[left]);
                break;
            }
            
            // Calculate the middle:
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
