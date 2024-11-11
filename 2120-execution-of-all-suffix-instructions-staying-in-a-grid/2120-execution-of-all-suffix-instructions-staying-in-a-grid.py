class Solution:
    def executeInstructions(self, n: int, sp: List[int], s: str) -> List[int]:
        grid = [[[] for _ in range(n)] for _ in range(n)]
        ans = []
        
        for a in range(len(s)):
            i, j = sp[0], sp[1]
            cnt = 0
            for h in s[a : ]:
                if h == "U":
                    i -= 1
                if h == "D":
                    i += 1
                if h == "R":
                    j += 1
                if h == "L":
                    j -= 1
                if i < 0 or j < 0 or i == n or j == n:
                    break
                cnt += 1
            ans.append(cnt)

        return ans