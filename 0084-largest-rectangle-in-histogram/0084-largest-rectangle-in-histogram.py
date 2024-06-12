class Solution:
    def largestRectangleArea(self, h: List[int]) -> int:
        stack = []
        max_area = 0
        h.append(0)

        for idx, height in enumerate(h):
            start_idx = idx
            while stack and stack[-1][1] > height:
                curr_idx, curr_height = stack.pop()
                max_area = max(max_area, curr_height * (idx - curr_idx))
                start_idx = curr_idx
            stack.append((start_idx, height))

        # for idx, height in stack:
        #     max_area = max(max_area, height * (len(h) - idx))

        return max_area