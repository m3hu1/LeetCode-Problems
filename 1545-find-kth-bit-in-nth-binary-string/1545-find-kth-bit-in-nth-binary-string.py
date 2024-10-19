class Solution:
    def findKthBit(self, n: int, k: int) -> str:
        x = "0"

        for i in range(n):
            temp = ""
            for i in range(len(x)):
                if x[i] == "1":
                    temp += "0"
                else:
                    temp += "1"
            temp = temp[::-1]
            x = x + "1" + temp
    
        return x[k - 1]