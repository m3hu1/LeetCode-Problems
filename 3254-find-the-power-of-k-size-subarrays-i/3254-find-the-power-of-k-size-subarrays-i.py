class Solution:
    def resultsArray(self, nums: List[int], k: int) -> List[int]:
        if k == 1:
            return nums
        
        if len(nums) == 1:
            return [-1]

        ans = [-1] * (len(nums) - k + 1)
        i = 0

        for j in range(1, len(nums)):
            if nums[j] == nums[j - 1] + 1:
                if j - i + 1 == k:
                    ans[i] = nums[j]
                    i += 1
            else:
                i = j

        return ans