class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        stack = []
        ans = []

        def bt(opened, closed) -> None:
            if opened == n and closed == n:
                ans.append("".join(stack))
                return
            if opened < n:
                stack.append("(")
                bt(opened + 1, closed)
                stack.pop()
            if closed < opened:
                stack.append(")")
                bt(opened, closed + 1)
                stack.pop()
        
        bt(0, 0)
        return ans