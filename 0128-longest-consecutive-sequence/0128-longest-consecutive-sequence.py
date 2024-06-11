class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        ans = 0
        hashset = set(nums)

        for num in hashset:
            if num - 1 not in hashset:
                curr_length = 1
                while num + 1 in hashset:
                    curr_length += 1
                    num += 1
                ans = max(ans, curr_length)

        return ans