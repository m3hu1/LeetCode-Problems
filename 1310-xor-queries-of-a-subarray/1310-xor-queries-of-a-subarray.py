class Solution:
    def xorQueries(self, nums: List[int], q: List[List[int]]) -> List[int]:
        ans = []
        p = [0 for _ in range(1 + len(nums))]

        for i in range(len(nums)):
            p[i + 1] = nums[i] ^ p[i]

        for a, b in q:
            ans.append(p[a] ^ p[b + 1])

        return ans