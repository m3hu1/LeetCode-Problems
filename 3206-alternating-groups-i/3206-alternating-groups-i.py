class Solution:
    def numberOfAlternatingGroups(self, c: List[int]) -> int:
        ans = 0
        n = len(c)

        # for i in range(len(c)):
        #     if i == 0 and c[i] != c[i + 1]:
        #         ans += 1
        #         continue
        #     if i == len(c) - 1 and c[i] != c[i - 1]:
        #         ans += 1
        #         continue
        #     if c[i] != c[i - 1] and c[i + 1] != c[i]:
        #         ans += 1

        for i in range(len(c)):
            prev = c[(i - 1 + n) % n]
            curr = c[i]
            nex = c[(i + 1) % n]
            if curr != prev and curr != nex:
                ans += 1
        
        return ans