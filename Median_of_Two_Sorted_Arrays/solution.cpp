class Solution {
public:
    vector<int> MergeArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int len1 = nums1.size();
        int len2 = nums2.size();

        for(int& num: nums2)
            nums1.push_back(num);

        sort(nums1.begin(), nums1.end());

        return nums1;
    }
    double Median(vector<int>& nums)
    {
        int len = nums.size();

        if(len%2!=0) return nums[len/2];

        return (nums[len/2-1]+nums[len/2])/2.0;
    } 
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v = MergeArrays(nums1, nums2);
        return Median(v);
    }
};