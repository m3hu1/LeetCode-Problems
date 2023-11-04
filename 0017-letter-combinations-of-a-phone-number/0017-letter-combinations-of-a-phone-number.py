class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if digits=="":
            return []
        d = ["", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"]
        n = len(digits)
        a = []
        def solve(i,s):
            if len(s)==n:
                a.append("".join(s))
            if i==n:
                return
            for j in range(len(d[int(digits[i])])):
                s.append(d[int(digits[i])][j])
                solve(i+1,s)
                s.pop()
                solve(i+1,s)
            return 
        solve(0,[])
        return a

