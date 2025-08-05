class Solution:
    def numOfUnplacedFruits(self, fruits: List[int], b: List[int]) -> int:
        ans = 0

        for f in fruits:
            for i in range(len(b)):
                if f <= b[i]:
                    b[i] = 0
                    break
            else: ans += 1

        return ans