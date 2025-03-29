MOD = 1000000007

prime = [True] * 100001
ps = [0] * 100001
for i in range(2, 100001):
    if prime[i]:
        for j in range(i, 100001, i):
            prime[j] = False
            ps[j] += 1

prime[0] = prime[1] = False
ps[0] = ps[1] = 0

class Solution:
    def maximumScore(self, nums: List[int], k: int) -> int:
        s = [ps[x] for x in nums]
        n = len(nums)
        left, right = [-1] * n, [n] * n

        for i in range(1, n):
            j = i - 1
            while j >= 0 and s[j] < s[i]: j = left[j]
            left[i] = j

        for i in range(n-2, -1, -1):
            j = i + 1
            while j < n and s[j] <= s[i]: j = right[j]
            right[i] = j
        
        rs = [(i - left[i]) * (right[i] - i) for i in range(n)]
        cs = sorted([(nums[i], rs[i]) for i in range(n)], reverse=True)
        score, i = 1, 0

        while k > 0:
            power = min(cs[i][1], k)
            score = score * pow(cs[i][0], power, MOD)
            k -= power
            i += 1
        
        return score % MOD