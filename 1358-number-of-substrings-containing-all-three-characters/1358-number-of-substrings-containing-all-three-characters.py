class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        a, b, c = -1, -1, -1
        ans = 0
        
        for i in range(len(s)):
            if s[i] == 'a':
                a = i
            elif s[i] == 'b':
                b = i
            elif s[i] == 'c':
                c = i
            ans += min(a, b, c) + 1
        
        return ans