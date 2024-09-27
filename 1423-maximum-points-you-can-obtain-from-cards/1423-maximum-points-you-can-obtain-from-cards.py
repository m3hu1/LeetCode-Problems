class Solution:
    def maxScore(self, cp: List[int], k: int) -> int:
        if k == len(cp):
            return sum(cp)

        n = len(cp)
        mini = float('inf')
        curr = 0
        
        for i in range(n - k):
            curr += cp[i]
    
        mini = curr

        for i in range(n - k, n):
            curr += cp[i] - cp[i - (n - k)]
            mini = min(mini, curr)

        return sum(cp) - mini