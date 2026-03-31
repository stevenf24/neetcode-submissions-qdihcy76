class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Create hash map that will have key-value pair of string -> vector<string>
        unordered_map<string, vector<string>> res;

        // Go through string
        for(const auto& s:  strs) {
            // Create vector that will contain the 26 alphabetical characters
            // to be counted
            vector<int> count(26,0);

            for(char c : s) {
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for(int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for(const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};