class Solution {
public:
    int findMin(vector<int> &nums) {
        // Asssume minimum is the first element of the
        // array:
        int res = nums[0];

        // Create pointers for the first element and the last
        // element of the array:
        int left = 0, right = (nums.size() - 1);

        // Go through the array:
        while(left <= right) {
            // If the left is less than the middle, store it to res:
            if(nums[left] < nums[right]) {
                res = min(res, nums[left]);
                break;
            }
            
            // Calculate the middle:
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
