class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        # q = deque()

        # for i in range(n):
        #     q.append(i)

        # while q:
        
        ans = 0

        for i in range(2, 1 + n):
            ans = (k + ans) % i
        
        return ans + 1