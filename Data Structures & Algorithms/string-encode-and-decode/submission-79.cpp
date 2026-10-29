class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encode = "";

        for(const string& i : strs) {
            encode.append(to_string(i.length()));
            encode.push_back('#');
            encode.append(i);
        }

        return encode;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int i = 0;

        while(i < s.length()) {
            int j = i;

            while(s[j] != '#')
                j++;

            int length = stoi(s.substr(i, j - i));

            i = j + 1;
            j = length + i;

            res.push_back(s.substr(i, length));

            i = j;
        }

        return res;
    }
};
