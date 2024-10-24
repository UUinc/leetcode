class Solution(object):
    def productExceptSelf(self, nums):
        t1 = [nums[0]]
        t2 = [nums[-1]]
        res = []
        for i in range(1, len(nums)):
            t1.append(nums[i] * t1[i-1])
        for i in range(len(nums)-2, -1, -1):
            t2.append(nums[i] * t2[len(nums) - 2 - i])
        t2 = t2[-1::-1]
        for i in range(len(nums)):
            res.append(1)
            if i - 1 >= 0:
                res[i] *= t1[i-1]
            if i + 1 < len(nums):
                res[i] *= t2[i+1]
        return res