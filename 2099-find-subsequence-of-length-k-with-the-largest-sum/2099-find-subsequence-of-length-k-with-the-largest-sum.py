class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        temp = list(enumerate(nums))
        sorted_temp = sorted(temp, key = lambda x: x[1])
        sorted_temp.reverse()
        idx = sorted_temp[ : k]
        idx = sorted(idx, key = lambda x: x[0])

        return [x[1] for x in idx]