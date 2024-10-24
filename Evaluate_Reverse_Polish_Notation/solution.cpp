class Solution {
public:
    void Operation(stack<int>& s, string op)
    {
        int op2 = s.top(); s.pop();
        int op1 = s.top(); s.pop();
        int r;
        if(op == "+")
        {
            r = op1 + op2;
        }
        else if(op == "-")
        {
            r = op1 - op2;
        }
        else if(op == "*"){
            r = op1 * op2;
        }
        else if(op == "/")
        {
            r = op1 / op2;
        }

        s.push(r);
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string str : tokens)
        {
            if(str == "+" || str == "-" || str == "*" || str == "/")
            {
                Operation(s, str);
            }
            else
            {
                int v = stoi(str);
                s.push(v);
            }
        }

        return s.top();
    }
};