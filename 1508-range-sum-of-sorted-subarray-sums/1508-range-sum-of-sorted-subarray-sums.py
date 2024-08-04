class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        MOD = 10e9 + 7
        ans = nums.copy()

        for i, num in enumerate(nums):
            temp = num
            for j in range(i + 1, n):
                temp += nums[j]
                ans.append(temp)
                
        ans.sort()
        return int(sum(ans[left - 1 : right]) % MOD)