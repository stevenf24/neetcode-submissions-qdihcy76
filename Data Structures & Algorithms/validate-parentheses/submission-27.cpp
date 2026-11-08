class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 0)
            return false;

        unordered_map<char, char> closeToOpen {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        std::stack<char> myStack;

        for(char c : s) {
            if(closeToOpen.count(c)){
                if(!myStack.empty() && myStack.top() == closeToOpen[c])
                    myStack.pop();
                else
                    return false;
            }
            else
                myStack.push(c);
        }

        return myStack.empty();

    }
};
