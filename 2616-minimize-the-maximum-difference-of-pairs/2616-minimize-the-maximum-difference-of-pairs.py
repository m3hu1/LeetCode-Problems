class Solution:
    def minimizeMax(self, nums: List[int], p: int) -> int:
        nums.sort()
        l, r = 0, nums[len(nums) - 1] - nums[0]

        while l < r:
            mid = (l + r) // 2
            i = 1
            j = 0
            while i < len(nums):
                if nums[i] - nums[i - 1] <= mid:
                    j += 1
                    i += 1
                i += 1
            if j >= p:
                r = mid
            else:
                l = mid + 1

        return l