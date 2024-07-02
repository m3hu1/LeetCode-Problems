class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        XOR = x ^ y
        ans = 0

        while XOR:
            ans += XOR % 2
            XOR = XOR >> 1
        
        return ans