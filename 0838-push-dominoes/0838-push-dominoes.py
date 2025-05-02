class Solution:
    def pushDominoes(self, d: str) -> str:
        s = 'L' + d + 'R'
        n = len(s)
        prev, ans = 0, list(s)

        for i in range(1, n):
            if s[i] == '.':
                continue
            if i - prev > 1:
                if s[prev] == s[i]:
                    for k in range(prev + 1, i):
                        ans[k] = s[i]
                elif s[prev] == 'R' and s[i] == 'L':
                    l, r = prev + 1, i - 1
                    while l < r:
                        ans[l] = 'R'
                        ans[r] = 'L'
                        l += 1; r-= 1
            prev = i

        return ''.join(ans[1:-1])
