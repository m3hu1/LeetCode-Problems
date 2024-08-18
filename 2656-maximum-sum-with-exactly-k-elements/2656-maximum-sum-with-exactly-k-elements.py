class Solution:
    def maximizeSum(self, nums: List[int], k: int) -> int:
        ans = 0
        
        while k > 0:
            maxi = max(nums)
            nums.remove(maxi)
            nums.append(maxi + 1)
            ans += maxi
            k -= 1
        
        return ans