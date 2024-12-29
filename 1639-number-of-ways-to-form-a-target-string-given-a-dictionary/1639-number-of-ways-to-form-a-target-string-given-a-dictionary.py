class Solution:
    def numWays(self, w: List[str], t: str) -> int:
        m = int(1e9) + 7
        cnt = [defaultdict(int) for _ in range(len(w[0]))]

        for a in w:
            for i in range(len(w[0])):
                cnt[i][a[i]] += 1

        @cach
        def helper(i, j):
            if j == len(t):
                return 1
            if i >= len(w[0]) or len(w[0]) - i < len(t) - j:
                return 0
            flag = helper(i + 1, j)
            check = cnt[i][t[j]] * helper(i + 1, j + 1) if t[j] in cnt[i] else 0
            return (check + flag) % m

        return helper(0, 0) % m
