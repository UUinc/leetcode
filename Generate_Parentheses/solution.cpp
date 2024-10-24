class Solution {
public:
    bool isValid(vector<string> arr)
    {
        stack<string> s;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] == "(")
            {
                s.push("(");
            }
            else if(!s.empty())
            {
                if(s.top() == "(")
                {
                    s.pop();
                }
            }
            else
            {
                return false;
            }
        }

        return s.empty();
    }
    string arrToStr(vector<string> arr)
    {
        string ans = "";
        for(int i=0; i<arr.size(); i++)
        {
            ans+=arr[i];
        }
        return ans;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> tmp;
        vector<string> ans;
        for(int i=0; i<n; i++)
            tmp.push_back("(");
        for(int i=0; i<n; i++)
            tmp.push_back(")");

        do{
            if(isValid(tmp))
            {
                ans.push_back(arrToStr(tmp));
            }
        }while(next_permutation(tmp.begin(), tmp.end()));

        return ans;
    }
};