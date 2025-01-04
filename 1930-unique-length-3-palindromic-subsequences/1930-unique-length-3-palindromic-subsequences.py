class Solution:
    def countPalindromicSubsequence(self, s: str) -> int:
        mp, ans = defaultdict(list), 0

        for i, c in enumerate(s):
            mp[c].append(i)

        for a, b in product(mp, mp):
            i1, i2 = mp[a], mp[b]
            A = bisect_right(i2, i1[0])
            if A < len(i2) and i2[A] < i1[-1]:
                ans += 1
        
        return ans