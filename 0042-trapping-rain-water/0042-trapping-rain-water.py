class Solution:
    def trap(self, h: List[int]) -> int:
        max_area = 0
        max_left = 0
        max_right = 0
        l = 0
        r = len(h) - 1

        while l < r:
            if h[l] < h[r]:
                max_left = max(max_left, h[l])
                if max_left > h[l]:
                    max_area += max_left - h[l]
                l += 1
            else:
                max_right = max(max_right, h[r])
                if max_right > h[r]:
                    max_area += max_right - h[r]
                r -= 1

        return max_area