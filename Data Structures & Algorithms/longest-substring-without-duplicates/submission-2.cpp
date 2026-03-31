class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, res = 0;

        // Create a hash map that checks if the current character in the string
        // has already been seen:
        unordered_map<char, int> checked;

        for(int r = 0; r < s.size(); r++) {
            if(checked.find(s[r]) != checked.end()) {
                l = max(checked[s[r]] + 1, l);
            }

            checked[s[r]] = r;

            res = max(res, r - l + 1);
        }

        return res;
    }
};
