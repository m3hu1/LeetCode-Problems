class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        x = str(num)
        x = x[::-1]
        # print(int(x))
        new = str(int(x))
        new = new[::-1]
        # print(int(new))
        return num == int(new)