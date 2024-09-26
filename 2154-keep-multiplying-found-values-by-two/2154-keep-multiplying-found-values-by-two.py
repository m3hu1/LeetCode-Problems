class Solution:
    def findFinalValue(self, nums: List[int], og: int) -> int:
        while og in nums:
            og *= 2

        return og