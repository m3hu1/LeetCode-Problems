class Solution:
    def isArraySpecial(self, nums: List[int], q: List[List[int]]) -> List[bool]:
        arr = []
        ans = []

        for i in range(len(nums) - 1):
            if nums[i] % 2 == nums[i + 1] % 2:
                arr.append(i)

        for i, j in q:
            l = bisect_left(arr, i)
            r = bisect_right(arr, j - 1)
            if l == r:
                ans.append(True)
            else:
                ans.append(False)
        
        return ans