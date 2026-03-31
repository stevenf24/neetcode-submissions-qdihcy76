class Solution {
public:
    bool isAnagram(string s, string t) {
        /* Determines if length of strings are not
           equal, return false
        */
        if(s.size() != t.size())
            return false;

        // Create two hash maps for each string
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        // Loop through the size of one string
        for(int i = 0; i < s.size(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
    }
};