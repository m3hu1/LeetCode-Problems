class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        max_num = float('-inf')
        max_idx = 0

        for idx, num in enumerate(nums):
            if num > max_num:
                max_num = num
                max_idx = idx
        
        for num in nums:
            if num != max_num and 2 * num > max_num:
                return -1

        return max_idx