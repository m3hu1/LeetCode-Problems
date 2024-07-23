class Solution:
    def interpret(self, c: str) -> str:
        ans = []

        for i in range(len(c)):
            if c[i] == 'G':
                ans.append(c[i])
            elif c[i] == '(':
                if c[i + 1] == ')':
                    ans.append("o")
                elif c[i + 1] == 'a':
                    ans.append("al")
        
        return "".join(ans)