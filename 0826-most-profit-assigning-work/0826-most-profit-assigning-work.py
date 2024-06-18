class Solution:
    def maxProfitAssignment(self, difficulty: List[int], profit: List[int], worker: List[int]) -> int:
        worker.sort()
        pairs = sorted(zip(difficulty, profit))
        max_profit = 0
        ans = 0
        j = 0

        for i in range(len(worker)):
            while j < len(worker) and pairs[j][0] <= worker[i]:
                max_profit = max(max_profit, pairs[j][1])
                j += 1
            ans += max_profit
        
        return ans