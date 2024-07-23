class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans = []
        sorted_nums = sorted(nums)

        for num in nums:
            ans.append(sorted_nums.index(num))
        
        return ans