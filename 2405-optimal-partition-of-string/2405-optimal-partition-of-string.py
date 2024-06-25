class Solution:
    def partitionString(self, s: str) -> int:
        visited = set()
        ans = 0

        for char in s:
            if char not in visited:
                visited.add(char)
            else:
                ans += 1
                visited = {char}

        return ans + 1