class Solution {
public:
    bool isPalindrome(string s) {
        // Create two pointer variables:
        // - 'l' for the first index of string
        // - 'r' for the last index of string
        int l = 0, r = s.length() - 1;

        // Go through string if the left pointer is less
        // than the right:
        while(l < r) {

            // Check if l < r and is alphanumeric; increment l position
            while(l < r && !isAlpha(s[l]))
                l++;
            
            // Check if r > l and is alphanumeric; decrement r position
            while(r > l && !isAlpha(s[r]))
                r--;

            while(tolower(s[l]) != tolower(s[r]))
                return false;
            
            l++, r--;
        }

        return true;
    }


    // Helper function 'isAlpha' that is designed to 
    // return if character from string 's' is alphanumeric 
    bool isAlpha(char c) {
        return (c >= 'a' && c <= 'z' ||
                c >= 'A' && c <= 'Z' ||
                c >= '0' && c <= '9');
    }
};
