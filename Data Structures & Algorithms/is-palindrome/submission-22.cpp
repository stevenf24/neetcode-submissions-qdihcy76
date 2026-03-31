class Solution {
public:
    bool isPalindrome(string s) {
        // Create two pointers for each end of the string:
        int l = 0, r = s.length() - 1;

        // Go through string as left is less than r:
        while (l < r) {
            // Check if the current character is an alphanumeric
            while(l < r  && !isAlpha(s[l])) {
                l++;
            }

            while(r > l && !isAlpha(s[r])) {
                r--;
            }

            // If the characters at the current positions on the left and right
            // are not the same, return false:
            if(tolower(s[l]) != tolower(s[r]))
                return false;

            r--;
            l++;

        }

        return true;
        
    }

    // Create a helper function that passes the characters from the string in
    // 'isPalindrome' function:
    bool isAlpha(char c) {
        return {c >= 'a' && c <= 'z' ||
                c >= 'A' && c <= 'Z' ||
                c >= '0' && c <= '9'};
    }
};
