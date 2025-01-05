class Solution:
    def shiftingLetters(self, st: str, sh: List[List[int]]) -> str:
        ans, x = [0 for _ in range(len(st))], -97

        for s, e, d in sh:
            ans[s] += 1 if d else -1
            if e + 1 < len(st):
                ans[e + 1] -= 1 if d else -1

        for i in range(len(st)):
            x += ans[i]
            ans[i] = chr((ord(st[i]) + x) % 26 + 97)

        return "".join(ans)