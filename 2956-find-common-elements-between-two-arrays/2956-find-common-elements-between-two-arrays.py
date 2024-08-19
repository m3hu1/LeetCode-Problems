class Solution:
    def findIntersectionValues(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1set = set(nums1)
        nums2set = set(nums2)
        cnt1 = cnt2 = 0

        for num in nums1:
            if num in nums2set:
                cnt1 += 1
        for num in nums2:
            if num in nums1set:
                cnt2 += 1
        
        return [cnt1, cnt2]