class Solution {
public:
    bool isPalindrome(string s) {
        // Create pointers that will increment and decrement from
        // the left and right sides of the string:
        int left = 0, right = s.length() - 1;

        // Loop through the string while the left pointer is less than
        // the right:
        while(left < right) {
            // We increment the position of left if the current character
            // is not alphanumeric. Remember, we are only interested in
            // the alphanumeric characters. We also still check if the
            // left index is still less than the right:
            while(left < right && !isAlpha(s[left]))
                left++;
            
            // We decrement the position of right if the current character
            // is not alphanumeric. Remember, we are only interested in
            // the alphanumeric characters.
            // We also check if the right index, is still greater than
            // the right
            while(right > left && !isAlpha(s[right]))
                right--;

            // If the characters at the current positions on the left and right
            // are not the same, return false:
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            
            // Increment and decrement the positions of left and right if the
            // above conditions are true:
            left++, right--;
        }
        
        // Return true value if the string is a palindrome:
        return true;
    }

    // Create a helper function that compare the character at the current index
    // of the string with the ASCII alphanumeric characters:
    bool isAlpha(char c) {
        return { c >= 'A' && c <= 'Z' ||
                 c >= 'a' && c <= 'z' ||
                 c >= '0' && c <= '9'};
    }
};
