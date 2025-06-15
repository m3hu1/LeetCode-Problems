class Solution:
    def maxDiff(self, num: int) -> int:
        s = str(num)

        for i in range(len(s)):
            x = s[i]
            if x != '9':
                maxi = s.replace(x, '9')
                break
        else: maxi = s

        for i, ch in enumerate(s):
            if i == 0:
                if ch != '1':
                    mini = s.replace(ch, '1')
                    break
            else:
                if ch != '0' and ch != s[0]:
                    mini = s.replace(ch, '0')
                    break
        else: mini = s

        return int(maxi) - int(mini)