class Solution:
    def minSum(self, nums1: List[int], nums2: List[int]) -> int:
        s1 = sum(num if num != 0 else 1 for num in nums1)
        s2 = sum(num if num != 0 else 1 for num in nums2)

        if (s1 <= s2 and 0 in nums1) or s1 == s2: return s2
        if s1 > s2 and 0 in nums2: return s1

        return -1