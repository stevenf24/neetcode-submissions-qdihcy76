class Solution {
public:
    int findMin(vector<int> &nums) {
        // Create arbitrary value that stores the result.
        // We will assume that the first value of array is the smallest:
        int result = nums[0];

        // Create two pointers:
        // - l for the left side portion of the array
        // - r for the right side portion of the array
        int left = 0, right = nums.size() - 1;

        while(left <= right) {
            if(nums[left] < nums[right]) {
                result = min(result, nums[left]);
                break;
            }

            // Calculate the middle value
            int mid = left + (right - left) / 2;
            result = min(result, nums[mid]);

            // If the middle is 
            if(nums[mid] >= nums[left])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return result;
    }
};
