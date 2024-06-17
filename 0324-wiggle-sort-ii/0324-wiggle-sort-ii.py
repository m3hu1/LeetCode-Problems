class Solution:
    def wiggleSort(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        copy = sorted(nums)
        mid = (len(nums) + 1) // 2
        left_half = copy[ : mid]
        right_half = copy[mid : ]

        for i in range(len(nums)):
            if i % 2 == 0:
                nums[i] = left_half.pop()
            else:
                nums[i] = right_half.pop()
