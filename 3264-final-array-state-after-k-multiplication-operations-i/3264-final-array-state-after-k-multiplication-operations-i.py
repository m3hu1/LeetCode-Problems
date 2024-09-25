class Solution:
    def getFinalState(self, nums: List[int], k: int, m: int) -> List[int]:
        while k > 0:
            mini = float('inf')
            for idx, num in enumerate(nums):
                if num < mini:
                    mini = num
                    min_idx = idx
            nums[min_idx] = mini * m
            k -= 1
        
        return nums