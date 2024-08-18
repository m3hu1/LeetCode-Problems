class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        left = [0 * len(nums)]
        right = []
        LSUM = 0
        RSUM = sum(nums)
        ans = [0 * len(nums)]

        for i in range(len(nums) - 1):
            LSUM += nums[i]
            left.append(LSUM)

        for i in range(len(nums)):
            temp = RSUM - nums[i]
            RSUM -= nums[i]
            right.append(temp)

        # print(left, right)
        for i in range(len(nums)):
            ans[i] = abs(left[i] - right[i])

        return ans