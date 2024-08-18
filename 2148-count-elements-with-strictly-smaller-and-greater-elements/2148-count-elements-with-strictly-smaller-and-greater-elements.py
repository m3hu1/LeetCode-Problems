class Solution:
    def countElements(self, nums: List[int]) -> int:
        mini = min(nums)
        maxi = max(nums)

        ans = 0

        for num in nums:
            if num > mini and num < maxi:
                ans += 1
        
        return ans