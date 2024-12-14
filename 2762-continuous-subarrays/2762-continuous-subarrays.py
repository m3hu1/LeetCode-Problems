class Solution:
    def continuousSubarrays(self, nums: List[int]) -> int:
        ans = 0
        i = 0
        cnt = Counter()

        for x, b in enumerate(nums):
            cnt[b] += 1
            while max(cnt) - min(cnt) > 2:
                temp = nums[i]
                i += 1
                cnt[temp] -= 1
                if cnt[temp] == 0:
                    del cnt[temp]
            ans += x - i + 1

        return ans