class Solution:
    def findLHS(self, nums: List[int]) -> int:
        count = Counter(nums)
        max_len = 0

        for num in nums:
            curr_len = 0
            if num + 1 in count:
                curr_len = count[num + 1] + count[num]
            max_len = max(max_len, curr_len)

        return max_len