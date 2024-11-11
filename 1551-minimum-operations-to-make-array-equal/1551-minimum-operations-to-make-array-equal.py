class Solution:
    def minOperations(self, n: int) -> int:
        arr = [(2 * i) + 1 for i in range(n)]
        # print(arr)
        ans = 0

        for i in range(n // 2):
            ans += n - arr[i]
        
        return ans