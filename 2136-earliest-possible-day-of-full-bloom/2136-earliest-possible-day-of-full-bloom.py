class Solution:
    def earliestFullBloom(self, pt: List[int], gt: List[int]) -> int:
        nums = sorted(zip(gt, pt))
        nums.reverse()

        ans = 0
        t = 0

        for a, b in nums:
            t += b
            ans = max(ans, t + a)
        
        return ans