class Solution:
    def sumEvenAfterQueries(self, nums: List[int], queries: List[List[int]]) -> List[int]:
        ans = []
        SUM = sum([i for i in nums if i % 2 == 0])

        for val, idx in queries:
            if nums[idx] % 2 == 0:
                SUM -= nums[idx]
            nums[idx] += val
            if nums[idx] % 2 == 0:
                SUM += nums[idx]
            ans.append(SUM)
            
        return ans