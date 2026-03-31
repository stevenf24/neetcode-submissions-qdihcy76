class Solution {
public:
    bool isPalindrome(string s) {
        // Pointers at beginning of string
        // and end of the string
        int l = 0, r = s.length() - 1;

        // while left pointer is less than right pointer, when
        // they haven't crossed each other
        while(l < r) {
            /**
             * Checks if left pointer is still less than 
             * right pointer and are alpha numeric
            */
            while(l < r && !alphaNum(s[l])) {
                // Increments to next position in string
                // if condition is true
                l++;
            }
            
            while(r > l && !alphaNum(s[r])) {
                r--;
            }

            // Return false if the characters are not
            // equal to each other
            if(tolower(s[l]) != tolower(s[r])) {
                return false;
            }

            // This goes to the next iteration of the while loop
            l++; r--;
        }
        return true;
    }

    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');

    }
};