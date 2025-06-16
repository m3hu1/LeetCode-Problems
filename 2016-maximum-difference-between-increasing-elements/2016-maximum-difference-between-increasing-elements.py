class Solution:
    def maximumDifference(self, nums: List[int]) -> int:
        maxi = -1
        mini = nums[0]

        for i in range(len(nums)):
            maxi = max(maxi, nums[i] - mini)
            mini = min(mini, nums[i])
        
        return -1 if maxi == 0 else maxi