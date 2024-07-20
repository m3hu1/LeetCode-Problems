class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        ans = 0

        for i in nums:
            if i % 3 != 0:
                ans += 1

        return ans