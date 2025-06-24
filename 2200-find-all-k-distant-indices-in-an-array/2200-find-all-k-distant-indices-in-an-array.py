class Solution:
    def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:
        idx = [i for  i, val in enumerate(nums) if val == key]
        ans, j = [], 0

        for i in range(len(nums)):
            while j < len(idx) - 1 and abs(idx[j + 1] - i) <= k:
                j += 1
            if abs(idx[j] - i) <= k:
                ans.append(i)

        return ans