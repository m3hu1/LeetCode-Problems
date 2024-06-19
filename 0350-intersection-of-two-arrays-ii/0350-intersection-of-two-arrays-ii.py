class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1

        num_count = Counter(nums1)
        ans = []

        for num in nums2:
            if num in num_count:
                ans.append(num)
                num_count[num] -= 1
                if num_count[num] == 0:
                    del num_count[num]
        
        return ans