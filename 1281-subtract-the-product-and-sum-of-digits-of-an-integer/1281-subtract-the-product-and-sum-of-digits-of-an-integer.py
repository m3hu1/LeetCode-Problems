class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        def prod(x):
            prod = 1
            while x > 0:
                digit = x % 10
                prod *= digit
                x = x // 10
            return prod
        
        def SUM(x):
            SUM = 0
            while x > 0:
                digit = x % 10
                SUM += digit
                x = x // 10
            return SUM
        
        n_copy = n
        return prod(n) - SUM(n_copy)