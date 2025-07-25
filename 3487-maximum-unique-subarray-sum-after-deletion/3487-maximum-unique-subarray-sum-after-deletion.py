class Solution:
    def maxSum(self, nums: List[int]) -> int:
        ans = 0
        s = set()

        for num in nums:
            if num not in s and num > 0:
                ans += num
                s.add(num)

        if len(nums) > 0 and ans == 0:
            return max(nums)

        return ans