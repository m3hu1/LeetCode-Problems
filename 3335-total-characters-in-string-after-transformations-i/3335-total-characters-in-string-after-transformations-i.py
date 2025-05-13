class Solution:
    def lengthAfterTransformations(self, s: str, t: int) -> int:
        MOD = 10**9 + 7
        memo = defaultdict(int)

        def count(c):
            if c < 26: 
                return 1
            if c in memo: 
                return memo[c]
            memo[c] = count(c - 26) + count(c - 25)
            return memo[c]

        return sum(count(ord(c) - 97 + t) for c in s) % MOD