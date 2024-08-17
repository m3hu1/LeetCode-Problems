class Solution:
    def isSumEqual(self, fw: str, sw: str, tw: str) -> bool:
        # print(list(zip(fw, sw)))
        num1 = 0
        num2 = 0
        num3 = 0

        # for char1, char2, char3 in zip(fw, sw, tw):
        #     # num1.append(ord(char1) - ord('a'))
        #     num1 = num1 * 10 + (ord(char1) - ord('a'))
        #     # num2.append(ord(char2) - ord('a'))
        #     num2 = num2 * 10 + (ord(char2) - ord('a'))
        #     # num3.append(ord(char3) - ord('a'))
        #     num3 = num3 * 10 + (ord(char3) - ord('a'))
        for ch in fw:
            num1 = num1 * 10 + ord(ch) - ord('a')
        for ch in sw:
            num2 = num2 * 10 + ord(ch) - ord('a')
        for ch in tw:
            num3 = num3 * 10 + ord(ch) - ord('a')


        # print(num1, num2, num3
        return num1 + num2 == num3