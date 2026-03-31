class Solution {
public:
    bool isAnagram(string s, string t) {
        // Returns false if the lengths of each string do not
        // equal each other.
        /* 
        // This is because the anagaram must contain the exact same
        // characters as another string, despite their respective orders
        // being different
        */
        if(s.length() != t.length())
            return false;

        // Unordered maps will key the character in each respective
        // string and pair it to the value of the index
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        // Loops through the length of strings
        for(int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        
        return countS == countT;
    }
};