class Solution:
    def largestCombination(self, c: List[int]) -> int:
        ans = 0

        for i in range(32):
            cnt = 0
            for n in c:
                if n & 1 << i:
                    cnt += 1
            ans = max(ans, cnt)

        return ans