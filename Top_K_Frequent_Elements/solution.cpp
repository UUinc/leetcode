class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> M;

        for(int num : nums)
        {
            M[num]++;
        }

        vector<int> ans;
        for(int i=0; i<k; i++)
        {
            int max = 0;
            int maxKey = -10001;
            for(auto& it : M)
            {
                if(max <= it.second)
                {
                    max = it.second;
                    maxKey = it.first;
                }
            }

            ans.push_back(maxKey);
            M.erase(maxKey);
        }

        return ans;
    }
};