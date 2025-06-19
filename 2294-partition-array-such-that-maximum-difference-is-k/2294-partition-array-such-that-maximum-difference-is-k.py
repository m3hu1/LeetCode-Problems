class Solution:
    def partitionArray(self, nums: List[int], k: int) -> int:
        nums.sort()
        ans = 1
        prev = nums[0]

        for i in range(1, len(nums)):
            if nums[i] <= k + prev: continue
            prev = nums[i]
            ans += 1

        return ans