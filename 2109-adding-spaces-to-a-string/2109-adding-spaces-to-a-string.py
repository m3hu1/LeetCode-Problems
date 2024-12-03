class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        ans = []

        # for i in range(len(s)):
        #     if i not in spaces:
        #         ans.append(s[i])
        #     else:
        #         ans.append(' ')
        #         ans.append(s[i])

        i = 0
        j = 0

        while i < len(s):
            if j < len(spaces) and i == spaces[j]:
                j += 1
                ans.append(' ')
                ans.append(s[i])
            else:
                ans.append(s[i])
            i += 1

        return ''.join(ans)