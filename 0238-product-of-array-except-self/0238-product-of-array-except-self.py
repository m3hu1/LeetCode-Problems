class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = [1] * len(nums)
        prefix_product = 1
        postfix_product = 1

        for i in range(len(nums)):
            ans[i] = prefix_product
            prefix_product *= nums[i]
        
        for i in range(len(nums) - 1, -1, -1):
            ans[i] *= postfix_product
            postfix_product *= nums[i]

        return ans