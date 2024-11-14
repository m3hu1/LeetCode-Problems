class Solution:
    def minimizedMaximum(self, n: int, qs: List[int]) -> int:
        def helper(k):
            req = sum(ceil(q / k) for q in qs)
            return n >= req
        
        l, r = 1, max(qs)

        while l <= r:
            mid = (l + r) // 2
            if helper(mid):
                r = mid - 1
            else:
                l = mid + 1
        
        return l