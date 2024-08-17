class Solution:
    def findPeaks(self, m: List[int]) -> List[int]:
        ans = []

        for i in range(1, len(m) - 1):
            if m[i] > m[i - 1] and m[i] > m[i + 1]:
                ans.append(i)

        return ans