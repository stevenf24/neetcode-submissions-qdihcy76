class Solution {
public:
    bool isPalindrome(string s) {
        // Create two pointers that will serve as the first and last
        // indices of the string:
        int left = 0, right = s.length() - 1;

        // Go through the string by checking if the the left is greater
        // than the right:
        while(left < right) {
            // Checks if 'left' index is non-alphanumeric or not and if
            // it is less than 'right' index
            while(left < right && !isAlpha(s[left])) {
                // Increment to next character:
                left++;
            }

            // Checks if 'left' index is non-alphanumeric or not and if
            // it is less than 'right' index
            while(right > left && !isAlpha(s[right])) {
                // Decrement to next character:
                right--;
            }

            // if left and right index values are not the same,
            // then return false
            if(tolower(s[left]) != tolower(s[right]))
                return false;

            // increment and decrement the left and right pointers
            left++, right--;
        }

        return true;
        
    }


    // Helper function 'isAlpha' checks whether the characters of the string
    // are case-insensitive and alpha-numeric characters. Will be used to check if
    // there is a non-alphanumeric character among the string's characters:
    bool isAlpha(char c) {
        return c >= 'a' && c <= 'z' ||
               c >= 'A' && c <= 'Z' ||
               c >= '0' && c <= '9';
    }
};
