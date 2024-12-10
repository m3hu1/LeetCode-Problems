class Solution:
    def maximumLength(self, s: str) -> int:
        cnt = defaultdict(int)
        ans = ""
        f = 0
        
        while f < len(s):
            i = f
            while i < len(s) and s[i] == s[f]:
                i += 1
            num = i - f
            for l in range(num - 2, num + 1):
                sub = s[f] * l
                cnt[sub] += num - l + 1
                if cnt[sub] >= 3 and len(sub) > len(ans):
                    ans = sub
            f = i

        ans = len(ans) if ans else -1

        return ans