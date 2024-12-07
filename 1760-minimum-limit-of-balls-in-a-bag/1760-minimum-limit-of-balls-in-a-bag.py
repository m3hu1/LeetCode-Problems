class Solution:
    def minimumSize(self, nums: List[int], mo: int) -> int:
        def canBeDivided(t):
            o = 0
            for n in nums:
                o += ceil(n / t) - 1
                if o > mo:
                    return False
            return True
        
        low, high = 0, max(nums)

        while low < high:
            mid = low + (high - low) // 2
            if not canBeDivided(mid):
                low = mid + 1
            else:
                high = mid
        
        return low