class Solution:
    def minBitwiseArray(self, nums: List[int]) -> List[int]:
        ans = []

        for i in range(len(nums)):
            flag = False
            for j in range(nums[i]):
                if j | j + 1 == nums[i]:
                    ans.append(j)
                    flag = True
                    break
            if not flag:
                ans.append(-1)
        
        return ans
