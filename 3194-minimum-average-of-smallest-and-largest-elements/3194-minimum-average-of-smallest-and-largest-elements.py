class Solution:
    def minimumAverage(self, nums: List[int]) -> float:
        averages = []

        while nums:
            mini = min(nums)
            nums.remove(mini)
            maxi = max(nums)
            nums.remove(maxi)
            averages.append((mini + maxi) / 2)
        
        return min(averages)