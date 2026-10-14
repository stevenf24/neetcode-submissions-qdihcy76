class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded = "";

        for(const string& r : strs) {
            encoded.append(to_string(r.length()));
            encoded.push_back('#');
            encoded.append(r);
        }

        return encoded;

    }

    vector<string> decode(string s) {
        int i = 0;

        vector<string> res;

        while(i < s.length()) {
            int j = i;

            while(s[j] != '#')
                j++;

            int length = stoi(s.substr(i, j - i));

            i = j + 1;
            j = i + length;

            res.push_back(s.substr(i, length));

            i = j;

        }

        return res;
    }
};
