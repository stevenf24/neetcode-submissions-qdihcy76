class Solution {
public:
    vector<vector<std::string>> groupAnagrams(vector<std::string>& strs) {
        unordered_map<std::string, vector<std::string>> res;

        for(const auto& i : strs) {
            vector<int> count(26, 0);

            for(char c : i)
                count[c - 'a']++;

            std::string key = to_string(count[0]);

            for(int j = 1; j < 26; j++)
                key += ", " + to_string(count[j]);

            res[key].push_back(i);
        }

        vector<vector<std::string>> result;

        for(const auto& pair : res)
            result.push_back(pair.second);
        
        return result;
    }
};
