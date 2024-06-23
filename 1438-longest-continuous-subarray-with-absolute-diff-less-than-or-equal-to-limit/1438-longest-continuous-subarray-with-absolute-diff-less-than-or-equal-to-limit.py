from sortedcontainers import SortedList

class Solution:
    def longestSubarray(self, nums: List[int], lim: int) -> int:
        s = SortedList() # balanced bst works
        l = 0
        ans = 5

        for r in range(len(nums)):
            s.add(nums[r])
            while s[-1] - s[0] > lim:
                s.remove(nums[l])
                l += 1
            ans = max(ans, r - l + 1)

        return ans