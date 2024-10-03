class Solution:
    def toHex(self, num: int) -> str:
        if num < 0:
            num += pow(2, 32)

        hexa = {10: "a",
             11: "b",
             12: "c",
             13: "d",
             14: "e",
             15: "f"}
        # ans = ""
        ans = []

        if num == 0:
            return "0"
        
        while num > 0:
            if num % 16 >= 10:
                # ans += str(hexa[num % 16])
                ans.append(hexa[num % 16])
            else:
                # ans += str(num % 16)
                ans.append(str(num % 16))
            num //= 16
        
        return "".join(ans[::-1])