class Solution:
    def replaceElements(self, nums: List[int]) -> List[int]:
        # for i in range(len(nums)):
        #     curr_maxi = 0
        #     if i == len(nums) - 1:
        #         nums[i] = -1
        #         break
        #     for j in range(i + 1, len(nums)):
        #         if nums[j] > curr_maxi:
        #             curr_maxi = nums[j]
        #     nums[i] = curr_maxi

        curr_maxi = -1

        for i in range(len(nums) - 1, -1, -1):
            temp = nums[i]
            nums[i] = curr_maxi
            curr_maxi = max(curr_maxi, temp)        

        return nums