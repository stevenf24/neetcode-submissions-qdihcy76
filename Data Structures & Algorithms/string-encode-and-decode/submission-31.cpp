class Solution {
public:

    // How do we create a delimiter between each code?

    // When we encode the length of string at the beginning of each
    // word.

    // If integer in string, we must have delimiter at the beginning between
    // integer and delimiter, e.g "4#neet co#de" (this delimiter can also exist
    // in the string, and it wouldn't change how it's read if the integer is 
    // on the left)


    string encode(vector<string>& strs) {
        std::string res = "";

        for(const string& s : strs) {
            res.append(to_string(s.length()));
            res.push_back('#');
            res.append(s);
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while(i < s.length()) {
            int j = i;

            while(s[j] != '#')
                j++;

            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            result.push_back(s.substr(i, length));
            i = j;
        }

        return result;
    }
};
