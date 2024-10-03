class Solution:
    def minSubarray(self, nums: List[int], p: int) -> int:
        tot = sum(nums)
        k = tot % p

        if k == 0:
            return 0
        
        ans = len(nums)
        mp = defaultdict(int)
        mp[0] = -1
        SUM = 0

        for r in range(len(nums)):
            SUM += nums[r]
            SUM %= p
            want = (SUM - k) % p
            if want in mp:
                l = 1 + mp[want]
                ans = min(ans, r - l + 1)
            mp[SUM] = r
        
        return ans if ans != len(nums) else -1