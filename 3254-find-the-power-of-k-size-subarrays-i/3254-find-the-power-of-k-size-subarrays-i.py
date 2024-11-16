class Solution:
    def resultsArray(self, nums: List[int], k: int) -> List[int]:
        res = [-1] * (len(nums) - k + 1)
        cnt = 0

        for i in range(len(nums)):
            cnt = cnt + 1 if i and nums[i - 1] + 1 == nums[i] else 0
            if cnt >= k - 1:
                res[i - k + 1] = nums[i]

        return res