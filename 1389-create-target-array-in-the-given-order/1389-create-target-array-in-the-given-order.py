class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        ans = []

        for i in range(len(nums)):
            ans.insert(index[i], nums[i])

        return ans