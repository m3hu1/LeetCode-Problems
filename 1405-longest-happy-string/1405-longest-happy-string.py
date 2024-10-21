class Solution:
    def longestDiverseString(self, a: int, b: int, c: int) -> str:
        count = {'a': a, 'b': b, 'c': c}
        ans = []

        while True:
            chars = sorted(count.items(), key = lambda x: -1 * x[1])
            flag = False
            for c, cnt in chars:
                if cnt > 0:
                    if len(ans) >= 2 and c == ans[-1] == ans[-2]:
                        continue
                    ans.append(c)
                    count[c] -= 1
                    flag = True
                    break
            if not flag:
                break
        
        return "".join(ans)