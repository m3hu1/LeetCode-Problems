class Solution:
    def minimumMountainRemovals(self, nums: List[int]) -> int:
        ans = len(nums)
        arr = [0 for _ in range(len(nums))]
        t = [float('-inf')]

        for i in range(len(nums) - 1, -1, -1):
            curr = nums[i]
            l = bisect_left(t, curr)
            if l < len(t):
                t[l] = curr
            else:
                t.append(curr)
            arr[i] = l

        t = [float(-inf)]

        for i, n in enumerate(nums):
            l = bisect_left(t, n)
            r = arr[i]
            if l > 1 and r > 1:
                ans = min(ans, len(nums) - (l + r - 1))
            if l < len(t):
                t[l] = n
            else:
                t.append(n)

        return ans