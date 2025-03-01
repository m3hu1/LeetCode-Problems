class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        for i in range(len(nums) - 1):
            if nums[i] == nums[i + 1]:
                nums[i] = nums[i] * 2
                nums[i + 1] = 0
        
        for i in range(len(nums) - 1):
            if nums[i] == 0:
                nums.remove(nums[i])
                nums.append(0)

        # i = 0
        # j = len(nums) - 1
        # while i <= j:
        #     if nums[i] 

        
        return nums