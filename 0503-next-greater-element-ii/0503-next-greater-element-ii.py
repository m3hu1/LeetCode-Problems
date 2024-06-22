class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        stack = []
        ans = [-1 for i in nums]

        for _ in range(2):
            for idx, num in enumerate(nums):
                while stack and num > nums[stack[-1]]:
                    ans[stack.pop()] = num
                stack.append(idx)
        
        return ans