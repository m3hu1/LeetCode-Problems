class Solution:
    def numTilings(self, n: int) -> int:
        MOD = 10**9 + 7
        arr = [1, 2, 5]

        if n <= 3:
            return arr[n-1]
            
        for i in range(4, n + 1):
            ans = arr[-1] * 2 + arr[0]
            arr.pop(0)
            arr.append(ans)

        return arr[-1] % MOD