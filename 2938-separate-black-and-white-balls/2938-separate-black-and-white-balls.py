class Solution:
    def minimumSteps(self, s: str) -> int:
        i = len(s) - 1
        cnt = z = 0
        
        while i >= 0:
            if s[i] == '1':
                cnt += z
            else:
                z += 1
            i -= 1
        
        return cnt