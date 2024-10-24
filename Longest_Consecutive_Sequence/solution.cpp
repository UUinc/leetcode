class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        map<int, int> m;
        for(int num : nums)
        {
            m[num] = 1;
        }

        vector<int> arr;
        for(pair<int, int> el : m)
        {
            arr.push_back(el.first);
        }

        int max = 0;
        int c = 1;
        for(int i=0; i<arr.size()-1; i++)
        {
            if(arr[i] + 1 == arr[i+1])
                c++;
            else
            {
                if(max < c)
                    max = c;
                c=1;
            }
        }

        if(max < c)
            max = c;

        return max;
    }
};