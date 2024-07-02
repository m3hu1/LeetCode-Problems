class Solution:
    def bitwiseComplement(self, n: int) -> int:
        if n == 0:
            return 1
            
        copy = n
        temp = 1

        while copy:
            n = n ^ temp
            copy = copy >> 1
            temp = temp << 1
        
        return n