class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s)
        {
            if(!st.empty())
            {
                if((c == ')' && st.top() == '(')
                || (c == ']' && st.top() == '[')
                || (c == '}' && st.top() == '{'))
                {
                    st.pop();
                    continue;
                }
            }

            st.push(c);
        }


        return st.size() == 0;
    }
};