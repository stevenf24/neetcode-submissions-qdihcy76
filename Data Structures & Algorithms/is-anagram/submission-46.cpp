class Solution {
public:
    bool isAnagram(string s, string t) {
        // Check - if both strings are not the same size, return false:
        if(s.length() != t.length())
            return false;

        // Create two maps to count each respective string's
        // characters:
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        // Go through each string:
        for(int i = 0; i < s.length(); i++) {
            // Count the number of each respective string's characters
            countS[s[i]]++;
            countT[t[i]]++;
        }

        // Return true if both maps have counted
        return countS == countT;
    }
};
