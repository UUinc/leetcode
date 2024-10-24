class Solution {
public:
    string makeGood(string s) {
        for(int i=0; i<s.length()-1 && s != "";i++)
        {
            if(s[i] != s[i+1])
            {
                char tmp = s[i]-32 < 65 ? s[i]+32 : s[i]-32;
                if(tmp == s[i+1])
                {
                    s.erase(i,2);
                    i = -1;
                }
            }
        }    
        return s;
    }
};