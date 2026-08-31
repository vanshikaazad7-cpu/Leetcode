class Solution {
public:
    bool isValid(string s) {
     std::stack<char> st;
        
        for (char c : s) {
            // Push the corresponding closing bracket for every open bracket encountered
            if (c == '(') {
                st.push(')');
            } else if (c == '{') {
                st.push('}');
            } else if (c == '[') {
                st.push(']');
            } else {
                
                if (st.empty() || st.top() != c) {
                    return false;
                }
                st.pop();
            }
        }
        
        // If the stack is empty, all brackets were matched correctly
        return st.empty();   
    }
};