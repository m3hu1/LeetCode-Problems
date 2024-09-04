class Solution:
    def getLucky(self, s: str, k: int) -> int:
        def getSum(x):
            res = 0
            while x > 0:
                d = x % 10
                res += d
                x = x // 10
            return res
        number = ""
        for c in s:
            number += str(ord(c) - ord('a') + 1)
        # print(number)
        num = int(number)
        # ans = getSum(num)
        while k > 0:
            num = getSum(num)
            k -= 1
        return num