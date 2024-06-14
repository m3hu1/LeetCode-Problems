class Solution:
    def minIncrementForUnique(self, nums: List[int]) -> int:
        nums.sort()
        cnt = 0
        
        # [1,1,2,2,3,7], cnt = 1 -> [1,2,2,2,3,7], cnt = 2 -> [1,2,3,2,3,7], cnt = 4 -> [1,2,3,4,3,7], cnt = 6 -> [1,2,3,4,5,7] -> [all unique] -> return cnt = 6

        for i in range(len(nums) - 1):
            if nums[i] >= nums[i + 1]:
                difference = nums[i] - nums[i + 1]
                nums[i + 1] += difference + 1
                cnt += difference + 1

        return cnt