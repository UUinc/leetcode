class Solution {
public:
    int CharToInt(char c)
    {
        switch(c)
        {
            case '0': return 0;
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;
        }

        return -1;
    } 
    void trim_left(string& s)
    {
        int len = s.length();
        for(int i=0; i<len-1; i++)
        {
            if(s[i] != ' ') break;
            s.erase(i,1);
            i--;
        }
    }
    int myAtoi(string s) {
        int sym = 1;
        trim_left(s);

        if(s[0] == '-') sym = -1;

        if(s[0] == '+' || s[0] == '-') s.erase(0,1);

        string number;
        for(char& c : s)
        {
            if(!isdigit(c)) break;
            number.append(1,c);
        }

        int num=0;
        for(int i=number.length()-1, j=0; i>=0; i--, j++)
        {
            if(INT_MAX < CharToInt(number[i]) * pow(10, j) + num)
            {
                num = INT_MIN;
                if(sym > 0)
                    num = INT_MAX;
                return num;
            }
            num += CharToInt(number[i]) * pow(10, j);
        }

        num *= sym;

        return num;
    }
};