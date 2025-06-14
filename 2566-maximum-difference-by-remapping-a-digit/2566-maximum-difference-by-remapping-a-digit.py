class Solution:
    def minMaxDifference(self, num: int) -> int:
        s = str(num)

        for d in s:
            if d != '9':
                x = s.replace(d, '9')
                break
        else: x = s

        for d in s:
            if d != '0':
                y = s.replace(d, '0')
                break
        else: y = s

        return int(x) - int(y)