class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        ans = [0 for _ in range(len(nums))]

        for i in range(len(nums)):
            ans[i] = nums[nums[i]]

        return ans