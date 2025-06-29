class Solution:
    def numSubseq(self, nums: List[int], t: int) -> int:
        nums.sort()
        l, r, ans = 0, len(nums) - 1, 0
        MOD = 10**9 + 7
        x = [1] * len(nums)

        for i in range(1, len(nums)):
            x[i] = (x[i-1] * 2) % MOD
        
        while l <= r:
            if nums[l] + nums[r] <= t:
                ans = (ans + x[r - l]) % MOD
                l += 1
            else: r -= 1
        
        return ans