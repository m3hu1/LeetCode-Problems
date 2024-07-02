class Solution:
    def findComplement(self, num: int) -> int:
        copy = num
        temp = 1

        while copy:
            num = num ^ temp
            temp = temp << 1
            copy = copy >> 1
        
        return num