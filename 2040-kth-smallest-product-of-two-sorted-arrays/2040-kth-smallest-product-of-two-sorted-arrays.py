
class Solution:
    def kthSmallestProduct(self, nums1: List[int], nums2: List[int], k: int) -> int:
        nums1.sort(), nums2.sort()
        l, r = -99999999999, 999999999999
        
        def helper(x):
            ans = 0
            for a in nums1:
                if a == 0:
                    if x >= 0: ans += len(nums2)
                    continue
                if a < 0: ans += len(nums2) - bisect_left(nums2, ceil(x / a))
                else: ans += bisect_right(nums2, x // a)
            return ans

        while l < r:
            mid = l + (r - l) // 2
            if helper(mid) >= k: r = mid
            else: l = mid + 1

        return r