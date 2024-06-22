class Solution:
    def isUgly(self, n: int) -> bool:
        factors = [2, 3, 5]

        for num in factors:
            while n > 1 and n % num == 0:
                n = n // num
            
        if n == 1:
            return True
        
        return False