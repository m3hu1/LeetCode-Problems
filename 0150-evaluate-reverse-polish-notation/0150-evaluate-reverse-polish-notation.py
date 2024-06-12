class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        def sp():
            return stack.pop()
        # just postfix
        stack = []

        for s in tokens:
            if s == "+":
                stack.append(sp() + sp())
            elif s == "-":
                a = sp()
                b = sp()
                stack.append(b - a)
            elif s == "*":
                stack.append(sp() * sp())
            elif s == "/":
                a = sp()
                b = sp()
                stack.append(int(b / a))
            else:
                stack.append(int(s))
            
        return stack[-1]