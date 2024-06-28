class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums_set = set(nums)
        ans = float('-inf')
        maxi = float('-inf')
        smaxi = float('-inf')

        for num in nums_set:
            if num > maxi:
                ans = smaxi
                smaxi = maxi
                maxi = num
            elif num > smaxi:
                ans = smaxi
                smaxi = num
            elif num > ans:
                ans = num
        
        if ans == float('-inf'):
            return maxi
        
        return ans