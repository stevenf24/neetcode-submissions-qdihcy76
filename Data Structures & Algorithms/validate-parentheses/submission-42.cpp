class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 0)
            return false;

        unordered_map<char, char> closeToOpen {
            {'}' , '{'},
            {')' , '('},
            {']' , '['}
        };

        std::stack<char> myStack;

        for(char c : s) {
            if(closeToOpen.contains(c)) {
                if(!myStack.empty() && closeToOpen[c] == myStack.top())
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
