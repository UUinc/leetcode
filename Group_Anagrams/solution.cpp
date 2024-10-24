class Solution {
public:
    string getKey(string s)
    {
        sort(s.begin(), s.end());
        return s;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> t;
        for(string s : strs)
        {
            t[getKey(s)].push_back(s);
        }

        for (auto const& [key, val] : t)
        {
            ans.push_back(val);
        }

        return ans;
    }
};