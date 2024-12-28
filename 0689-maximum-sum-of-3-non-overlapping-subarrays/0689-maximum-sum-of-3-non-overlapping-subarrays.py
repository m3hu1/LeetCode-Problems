class Solution:
    def maxSumOfThreeSubarrays(self, nums: List[int], k: int) -> List[int]:
        arr = [0] + list(accumulate(nums))

        @cache
        def helper(i, r = 3):
            if not r: 
                return [], 0
            if i + k > len(nums):
                return [], float('-inf')

            s, ssum = helper(i + 1, r)
            p, psum = helper(i + k, r - 1)

            psum += arr[i + k] - arr[i]

            if psum > ssum:
                return [i] + p, psum
            elif psum == ssum:
                return min([i] + p, s), psum
            else:
                return s, ssum

        return helper(0)[0]