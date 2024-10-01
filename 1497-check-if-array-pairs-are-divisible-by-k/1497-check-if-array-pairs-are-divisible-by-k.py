class Solution:
    def canArrange(self, nums: List[int], k: int) -> bool:
        if len(nums) % 2 != 0: 
            return False
        
        ans = 0

        for num in nums:
            rem = num % k
            ans ^= (1 << rem)
        
        return ans == 0