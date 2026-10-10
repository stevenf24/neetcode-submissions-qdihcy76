class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(const auto& i : strs) {
            vector<int> count(26, 0);

            for(char c : i){
                count[c - 'a']++;
            }

            std::string key = to_string(count[0]);

            for(int j = 1; j < 26; j++)
                key += ", " + to_string(count[j]);

            res[key].push_back(i);
        }

        vector<vector<string>> result;

        for(const auto& pair : res)
            result.push_back(pair.second);

        return result;
    }
};
