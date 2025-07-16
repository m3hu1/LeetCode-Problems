class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        b = nums[0] % 2
        x, y, z = b, 1 - b, 1

        for i in range(1, len(nums)):
            if nums[i] % 2 == 1 - b:
                z += 1
                b = 1 - b
            if nums[i] % 2: x += 1
            else: y += 1

        return max(x, y, z)
                