class Solution:
    def countExcellentPairs(self, nums: List[int], k: int) -> int:
        SET = set(nums)
        temp = sorted([bin(i).count('1') for i in SET])
        l, r, ans = 0, len(SET) - 1, 0

        while l < r:
            if temp[l] + temp[r] < k:
                l += 1
            else:
                ans += 1 + 2 * (r - l)
                r -= 1

        if 2 * temp[l] >= k:
            ans += 1

        return ans