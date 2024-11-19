class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
      SUM = maxi = 0
      l, r = 0, 0
      SET = set()

      while r < len(nums):
        while nums[r] in SET or len(SET) >= k:
          SUM -= nums[l]
          SET.remove(nums[l])
          l += 1
        SUM += nums[r]
        SET.add(nums[r])
        if k == len(SET):
          maxi = max(maxi , SUM)
        r += 1
        
      return maxi