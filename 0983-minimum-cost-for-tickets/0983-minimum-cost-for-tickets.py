class Solution:
    def mincostTickets(self, d: List[int], c: List[int]) -> int:
        @cache
        def f(idx):
            if idx == len(d):
                return 0
            return min(c[0] + f(bisect_left(d, d[idx] + 1)), c[1] + f(bisect_left(d, d[idx] + 7)), c[2] + f(bisect_left(d, d[idx] + 30)))

        return f(0)