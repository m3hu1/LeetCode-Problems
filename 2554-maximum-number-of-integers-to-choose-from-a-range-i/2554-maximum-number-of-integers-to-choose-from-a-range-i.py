class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        SET = set(banned)
        SUM = 0
        ans = []

        for i in range(1, n + 1):
            if i not in SET:
                SUM += i
                if SUM <= maxSum:
                    SET.add(i)
                    ans.append(i)
        
        return len(ans)


        # 1, 2, 3