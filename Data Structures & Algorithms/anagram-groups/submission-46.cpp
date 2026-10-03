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

            for(int i = 1; i < 26; i++) {
                key += ", " + to_string(count[i]);
            }

            res[key].push_back(i);
        }

        vector<vector<string>> result;

        for(const auto& pair : res)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};
