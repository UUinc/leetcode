class Solution {
public:
    int mySqrt(int x) {
        for(long long i=1; 1; i++)
        {
            if(x<i*i)
                return int(i-1);
        }
        return -1;
    }
};