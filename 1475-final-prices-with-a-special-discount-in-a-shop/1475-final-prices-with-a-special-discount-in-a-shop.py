class Solution:
    def finalPrices(self, p: List[int]) -> List[int]:
        stack = []

        for i in range(len(p)):
            while stack and p[stack[-1]] >= p[i]:
                idx = stack.pop()
                p[idx] -= p[i]
            stack.append(i)
    
        return p