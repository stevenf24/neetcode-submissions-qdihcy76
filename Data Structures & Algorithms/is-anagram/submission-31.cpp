class Solution {
public:
    bool isAnagram(string s, string t) {
        // Two Unordered Maps to point the character of a string to its index to count
        // the number of characters and compare if each string has them
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        
        // Returns false if the strings are not equal length
        if(s.length() != t.length())
            return false;

        // Go through each string
        for(int i = 0; i < s.length(); i++) {
            // count each individual character for each string
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
    }
};
