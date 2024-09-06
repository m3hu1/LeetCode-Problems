class Solution:
    def checkTwoChessboards(self, c1: str, c2: str) -> bool:
        flag1 = ord(c1[0]) % 2 == int(c1[1]) % 2
        flag2 = ord(c2[0]) % 2 == int(c2[1]) % 2
        
        return flag1 == flag2