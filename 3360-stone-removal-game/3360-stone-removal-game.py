class Solution:
    def canAliceWin(self, n: int) -> bool:
        if n < 10:
            return False

        alice = True
        cnt = 10

        while n > 0:
            if cnt > n:
                alice = not alice
            n -= cnt
            cnt -= 1
            alice = not alice
        
        return not alice