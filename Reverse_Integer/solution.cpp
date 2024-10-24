class Solution {
public:
    int reverse(int x) {
        long number = x;
        try
        {
            int tmp=1;
            if(number<0)
            {
                tmp *= -1;
                number *= -1;
            }

            string str = to_string(number);
            int len = str.length();
            for(int i=0; i<len/2;i++)
            {
                char t = str[i];
                str[i] = str[len-1-i];
                str[len-1-i] = t;
            }
            
            x = stoi(str);
            x*=tmp;
        }
        catch(...)
        {
            x = 0;
        }
        
        return x;
    }
};