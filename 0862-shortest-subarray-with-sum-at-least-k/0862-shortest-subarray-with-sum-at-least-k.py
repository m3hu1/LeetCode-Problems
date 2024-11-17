class Solution:
    def shortestSubarray(self, nums, k):
        pSUM, ans = 0, float('inf')
        s = []
        s.append((-1, 0))

        for r in range(len(nums)):
            pSUM += nums[r]
            a = s[-1][1]
            while s and a >= pSUM:
                s.pop()
            while s and k <= pSUM - s[0][1]:
                ans = min(ans,r - s.pop(0)[0])
            s.append([r,pSUM])
        
        if ans != float('inf'):
            return ans
        
        return -1