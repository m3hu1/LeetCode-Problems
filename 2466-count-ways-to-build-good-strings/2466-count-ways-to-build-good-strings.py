class Solution:
    def countGoodStrings(self, low: int, high: int, z: int, o: int) -> int:
        mod = int(1e9) + 7

        @cache
        def f(x):
            if x > high:
                return 0
            if low <= x + z <= high:
                a = 1 + f(x + z)
            else:
                a = f(x + z)
            if low <= x + o <= high:
                b = 1 + f(x + o)
            else:
                b = f(o + x)
            return (a + b) % mod

        return f(0)