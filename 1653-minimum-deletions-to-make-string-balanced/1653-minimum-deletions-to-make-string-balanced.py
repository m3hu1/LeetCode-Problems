class Solution:
    def minimumDeletions(self, s: str) -> int:
        stack = []
        ans = 0

        for ch in s:
            if ch == 'a':
                if stack:
                    ans += 1
                    stack.pop()
            else:
                stack.append(ch)
                
        return ans