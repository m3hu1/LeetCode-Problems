class Solution:
    def dailyTemperatures(self, t: List[int]) -> List[int]:
        ans = [0 for _ in t]
        stack = [] # [ [temp, idx] entries ]

        for idx, temp in enumerate(t):
            while stack and temp > stack[-1][0]:
                curr_temp, curr_idx = stack.pop()
                ans[curr_idx] = idx - curr_idx
            stack.append([temp, idx])
        
        return ans