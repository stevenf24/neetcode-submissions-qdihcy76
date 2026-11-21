class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for(const string& i : strs) {
            encoded.append(to_string(i.length()));
            encoded.push_back('#');
            encoded.append(i);
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        int i = 0;

        while(i < s.length()) {
            int j = i;

            while(s[j] != '#')
                j++;

            int length = stoi(s.substr(i, j - i));

            i = j + 1;
            j = i + length;

            decoded.push_back(s.substr(i, length));

            i = j;
        }

        return decoded;
    }
};
