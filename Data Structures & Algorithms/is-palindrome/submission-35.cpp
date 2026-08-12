class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0)
            return false;
        
        int l = 0, r = s.length() - 1;

        while(l < r) {
            while(l < r && !(isAlpha(s[l])))
                l++;
            while(r > l && !(isAlpha(s[r])))
                r--;
            while(tolower(s[l]) != tolower(s[r]))
                return false;
            
            l++, r--;
        }

        return true;

    }

    bool isAlpha(char c) {
        return c >= 'A' && c <= 'Z' ||
               c >= 'a' && c <= 'z' ||
               c >= '0' && c <= '9';
    }
};
