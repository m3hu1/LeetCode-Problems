class Solution:
    def canSortArray(self, nums: List[int]) -> bool:
        prevMaxi = 0
        i = 0

        while i < len(nums):
            mini = maxi = nums[i]
            bits = nums[i].bit_count()
            j = i + 1
            while j < len(nums) and nums[j].bit_count() == bits:
                mini, maxi = min(mini, nums[j]), max(maxi, nums[j])
                j += 1
            if mini < prevMaxi:
                return False
            prevMaxi = maxi
            i = j
        
        return True