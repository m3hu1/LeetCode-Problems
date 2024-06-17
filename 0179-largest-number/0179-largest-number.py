class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        for idx, num in enumerate(nums):
            nums[idx] = str(num)

        nums.sort(key = lambda x: x * 10, reverse = True)

        if nums[0] == '0':
            return 0

        return "".join(nums)