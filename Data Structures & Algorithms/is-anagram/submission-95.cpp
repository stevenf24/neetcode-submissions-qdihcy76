class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for(char c : s) {
            countS[c]++;
        }

        for(char c : t) {
            countT[c]++;
        }

        return countS == countT;
    }
};
