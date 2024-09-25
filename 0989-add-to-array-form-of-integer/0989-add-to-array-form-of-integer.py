class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        ans = []
        number = 0

        for n in num:
            number = number * 10 + n
        
        new = number + k

        while new > 0:
            ans.append(new % 10)
            new //= 10

        return reversed(ans)