class Solution:
    def isThree(self, n: int) -> bool:
        cnt = 0

        for i in range(1, n + 1):
            if n % i == 0:
                cnt += 1
                
        if cnt == 3:
            return True

        return False