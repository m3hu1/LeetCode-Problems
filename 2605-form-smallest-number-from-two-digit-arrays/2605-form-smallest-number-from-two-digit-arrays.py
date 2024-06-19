class Solution:
    def minNumber(self, nums1: List[int], nums2: List[int]) -> int:
        ans = 0
        count = Counter(nums1)
        prospect = []

        for num in nums2:
            if num in count:
                prospect.append(num)
        
        if prospect:
            return min(prospect)
        
        a = str(min(nums1))
        b = str(min(nums2))

        if a < b:
            return int(a + b)
            
        return int(b + a)