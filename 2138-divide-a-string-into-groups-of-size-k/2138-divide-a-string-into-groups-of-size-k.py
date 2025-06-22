class Solution:
    def divideString(self, s: str, k: int, f: str) -> List[str]:
        n = len(s) % k
        ans = []

        if n != 0:
            s += (k - n) * f
        
        for i in range(0, len(s) - k + 1, k):
            ans.append(s[i : i + k])

        return ans