class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        close_to_open_map = {")": "(", "}": "{", "]": "["}

        for ch in s:
            if ch in close_to_open_map:
                if stack and stack[-1] == close_to_open_map[ch]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(ch)

        return not stack