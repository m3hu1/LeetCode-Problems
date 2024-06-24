class Solution:
    def minKBitFlips(self, nums: List[int], k: int) -> int:
        q = deque()
        ans = 0
        temp = False

        for i in range(len(nums)):
            if q and q[0] == i:
                q.popleft()
                temp = not temp
            if temp == nums[i]:
                q.append(i + k)
                ans += 1
                temp = not temp
        
        if q and q[0] == len(nums):
            q.popleft()
        
        if q:
            return -1
        
        return ans