class Solution {
public:
    bool isPalindrome(string s) {
        // Create two pointers
        // - l for left side of string
        // - r for right side of string
        int l = 0, r = s.length() - 1;

        // Go through string:
        while(l < r) {
            while(l < r && !isAlpha(s[l]))
                l++;
            while(r > l && !isAlpha(s[r]))
                r--;
            
            if(tolower(s[l]) != tolower(s[r]))
                return false;
            
            l++; 
            r--;
        }

        return true;
    }

    bool isAlpha(char c) {
        return {c >= 'a' && c <= 'z' ||
                c >= 'A' && c <= 'Z' ||
                c >= '0' && c <= '9' };
    }
};
