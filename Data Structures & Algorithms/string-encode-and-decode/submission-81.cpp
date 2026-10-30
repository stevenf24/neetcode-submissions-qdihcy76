class Solution {
public:

    std::string encode(vector<std::string>& strs) {
        std::string encoded = "";

        for(const string& i : strs) {
            encoded.append(to_string(i.length()));
            encoded.push_back('#');
            encoded.append(i);
        }

        return encoded;
    }

    vector<std::string> decode(std::string s) {
        vector<std::string> result;
        
        int i = 0;

        while(i < s.length()) {
            int j = i;

            while(s[j] != '#')
                j++;
            
            int length = stoi(s.substr(i, j - i));

            i = j + 1;
            j = length + i;

            result.push_back(s.substr(i, length));

            i = j;
        }

        return result;

    }
};
