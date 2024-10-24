public class Solution
{
    public int RomanToInt(string s)
    {
        int sum = 0;
        char[] number = s.ToCharArray();

        for (int i = 0; i < number.Length; i++)
        {
            if ((i != number.Length - 1)
                &&(number[i] == 'I' && (number[i+1] == 'V' || number[i+1] == 'X')))
            {
                sum += -ConvertRoman(number[i]);
            }
            else if ((i != number.Length - 1)
                && (number[i] == 'X' && (number[i + 1] == 'L' || number[i + 1] == 'C')))
            {
                sum += -ConvertRoman(number[i]);
            }
            else if ((i != number.Length - 1)
                && (number[i] == 'C' && (number[i + 1] == 'D' || number[i + 1] == 'M')))
            {
                sum += -ConvertRoman(number[i]);
            }
            else
                sum += ConvertRoman(number[i]);
        }

        return sum;
    }
    
    int ConvertRoman(char c)
    {
        switch (c)
        {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }    
    }
}