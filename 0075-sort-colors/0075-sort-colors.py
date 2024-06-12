class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zero_one = 0
        one_two = len(nums) - 1
        i = 0

        while i <= one_two:
            if nums[i] == 0:
                nums[i], nums[zero_one] = nums[zero_one], nums[i]
                i += 1
                zero_one += 1
                continue
            elif nums[i] == 2:
                nums[i], nums[one_two] = nums[one_two], nums[i]
                one_two -= 1
                continue
            i += 1
            