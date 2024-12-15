class Solution:
    def canSeePersonsCount(self, h: List[int]) -> List[int]:
        stack = []
        ans = [0 for _ in range(len(h))]

        for i in range(len(h) - 1, -1, -1):
            x = h[i]
            check = 0
            while stack and x > stack[-1]:
                check += 1
                stack.pop()
            if stack:
                check += 1
            ans[i] = check
            stack.append(x)
        
        return ans