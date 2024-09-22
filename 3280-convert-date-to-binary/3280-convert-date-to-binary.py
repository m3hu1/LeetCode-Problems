class Solution:
    def convertDateToBinary(self, date: str) -> str:
        date = date.split("-")

        ans = [bin(int(i))[2 : ] for i in date]

        return '-'.join(ans)