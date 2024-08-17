class Solution:
    def alternateDigitSum(self, n: int) -> int:
        num = []

        while n > 0:
            digit = n % 10
            num.append(digit)
            n = n // 10

        num.reverse()

        ans = 0
        sign = 1

        # while x > 0:
        #     digit = x % 10
        #     ans += digit * sign
        #     # if digit != 0:
        #     #     sign = sign * -1
        #     x = x // 10

        for d in num:
            ans += d * sign
            sign = -1 * sign
        
        return ans