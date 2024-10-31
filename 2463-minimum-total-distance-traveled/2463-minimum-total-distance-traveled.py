class Solution:
    def minimumTotalDistance(self, r: List[int], f: List[List[int]]) -> int:
        r.sort()
        f.sort()

        @cache
        def helper(r_idx, f_idx, u):
            if r_idx == len(r):
                return 0
            if f_idx == len(f):
                return float('inf')
            ans = helper(r_idx, f_idx + 1, 0)
            if u < f[f_idx][1]:
                dist = abs(r[r_idx] - f[f_idx][0])
                ans = min(ans, dist + helper(r_idx + 1, f_idx, u + 1))
            return ans

        return helper(0, 0, 0)