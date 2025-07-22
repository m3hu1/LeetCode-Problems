class Solution:
    def maximumUniqueSubarray(self, nums: List[int]) -> int:
        vis = set()
        left = curr = maxi = 0

        for right in range(len(nums)):
            while nums[right] in vis:
                vis.remove(nums[left])
                curr -= nums[left]
                left += 1
            vis.add(nums[right])
            curr += nums[right]
            maxi = max(maxi,curr)

        return maxi