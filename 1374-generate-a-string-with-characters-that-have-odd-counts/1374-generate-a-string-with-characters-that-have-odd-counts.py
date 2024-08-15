class Solution:
    def generateTheString(self, n: int) -> str:
        ans = []
        
        if n % 2 != 0:
            while n != 0:
                ans.append('a')
                n -= 1
            return "".join(ans)
        else:
            while n - 1 != 0:
                ans.append('a')
                n -= 1
            ans.append('b')
            return "".join(ans)
        
        return ans