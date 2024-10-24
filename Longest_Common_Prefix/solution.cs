public class Solution
{
    public string LongestCommonPrefix(string[] strs) 
    {
        char[][] Char = new char[strs.Length][];
        List<char> common = new List<char>();
        int min = 0;

        for (int i = 0; i < strs.Length; i++)
        {
            Char[i] = strs[i].ToCharArray();
        }
        if (0 < strs.Length)
        {
            min = Char[0].Length;
        }
        for (int k = 0; k < strs.Length; k++)
        {
            if (Char[k].Length < min)
                min = Char[k].Length;
        }
        if (min == 0)
            return "";
        for (int i = 0,j; i < min; i++)
        {
            for (j = 0; j < strs.Length; j++)
            {
                if ((j != strs.Length -1) && Char[j][i] != Char[j+1][i])
                    return new string(common.ToArray());
            }
            common.Add(Char[--j][i]);
        }

        return new string(common.ToArray());
}
}