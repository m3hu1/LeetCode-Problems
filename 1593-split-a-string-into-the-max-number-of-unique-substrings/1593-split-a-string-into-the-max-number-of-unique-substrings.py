class Solution:
    def maxUniqueSplit(self, s: str) -> int:
        SET = set()

        def bt(i, j):
            if j == len(s):
                return len(SET)
            ss = s[i : j + 1]
            temp = 0
            if ss not in SET:
                SET.add(ss)
                temp = bt(j + 1, j + 1)
                SET.remove(ss)
            x = bt(i, j + 1)
            return max(x, temp)

        ans = bt(0, 0)

        return ans