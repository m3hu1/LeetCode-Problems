class Solution:
    def primeSubOperation(self, nums: list[int]) -> bool:
        sieve = [True] * (1 + max(nums))
        sieve[1] = Fa
        
        for i in range(2, int((max(nums) + 1) ** 0.5) + 1):
            if sieve[i]:
                for j in range(i * i, max(nums) + 1, i):
                    sieve[j] = False
            
        curr, i = 1, 0

        while i < len(nums):
            diff = nums[i] - curr
            if diff < 0:
                return False
            if sieve[diff] or diff == 0:
                curr += 1
                i += 1
            else:
                curr += 1
                
        return True