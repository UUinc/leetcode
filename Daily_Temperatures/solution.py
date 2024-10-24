class Solution(object):
    def dailyTemperatures(self, temperatures):
        stack = [(temperatures[0], 0)]
        res = [0] * len(temperatures)
        for i in range(1, len(temperatures)):
            while temperatures[i] > stack[-1][0]:
                tmp_i = stack.pop()[1]
                res[tmp_i] = (i - tmp_i)
                if len(stack) == 0:
                    break
            stack.append((temperatures[i], i))
        for i in range(len(res), len(temperatures)):
            res.append(0)
        return res