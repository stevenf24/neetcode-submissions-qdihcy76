class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0, last = s.length() - 1;
        
        while(first < last) {
            while(!isAlpha(s[first]) && first < last)
                first++;
            while(last > first && !isAlpha(s[last]))
                last--;
            while(tolower(s[first]) != tolower(s[last]))
                return false;
            
            first++, last--;
            
        }

        return true;
    }

    bool isAlpha(char c) {
        return c >= 'a' && c <= 'z' ||
               c >= 'A' && c <= 'Z' ||
               c >= '0' && c <= '9';
    }
};
