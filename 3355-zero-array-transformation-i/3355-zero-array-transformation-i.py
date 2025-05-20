class Solution:
    def isZeroArray(self, nums: List[int], qs: List[List[int]]) -> bool:
        x = [0] * (len(nums) + 1)

        for l, r in qs:
            x[l] += 1
            x[r + 1] -= 1

        temp = 0

        for i in range(len(nums)):
            temp += x[i]
            if temp < nums[i]:
                return False

        return True