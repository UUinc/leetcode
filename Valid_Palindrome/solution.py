class Solution:
    def format(self, s):
        new_s = ""
        s = s.lower()
        for c in s:
            if (c >= 'a' and c <= 'z') or (c >= '0' and c <= '9'):
                new_s += c
        return new_s
    def isPalindrome(self, s: str) -> bool:
        s = self.format(s)
        for i in range(len(s) // 2):
            if s[i] != s[-1-i]:
                return False
        return True