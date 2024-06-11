class Solution:
    def maxArea(self, h: List[int]) -> int:
        max_area = 0
        l = 0
        r = len(h) - 1

        while l < r:
            min_height = min(h[l], h[r])
            area = min_height * (r - l)
            max_area = max(max_area, area)
            if h[l] < h[r]:
                l += 1
            else:
                r -= 1
        
        return max_area