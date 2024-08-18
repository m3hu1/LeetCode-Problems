class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        zeroes, ones = 0, 0
        max_z, max_o = 0, 0

        for c in s:
            if c == '0':
                zeroes += 1
                ones = 0
            else:
                zeroes = 0
                ones += 1
            max_z = max(max_z, zeroes)
            max_o = max(max_o, ones)
        
        return max_o > max_z