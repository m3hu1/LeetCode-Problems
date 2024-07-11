class Solution:
    def reverseParentheses(self, s: str) -> str:
        stack = []

        for char in s:
            if char == ')':
                curr = []
                while stack and stack[-1] != '(':
                    temp = stack.pop()
                    curr.append(temp)
                stack.pop()
                stack += curr
            else:
                stack.append(char)
        
        return "".join(stack)