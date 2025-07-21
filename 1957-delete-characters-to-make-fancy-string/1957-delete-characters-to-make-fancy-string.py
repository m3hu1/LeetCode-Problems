class Solution:
    def makeFancyString(self, s: str) -> str:
        c, ch = 1, s[0]
        ans = [s[0]]

        for n, i in enumerate(s[1:]):
            if i == ch:
                c += 1
                if c <= 2: ans.append(i)
            else:
                c = 1
                ch = i
                ans.append(i)
        return ''.join(ans)