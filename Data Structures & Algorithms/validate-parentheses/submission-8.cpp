class Solution {
public:
    bool isValid(string s) {
        std::stack<char> theStack;

        unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'} 
        };

        for(char c : s) {
            if(closeToOpen.count(c)) {
                if(!theStack.empty() && theStack.top() == closeToOpen[c]) 
                    theStack.pop();
                else
                    return false;
            }
            else
                theStack.push(c);
        }

        return theStack.empty();
    }
};
