class Solution:
    def diffWaysToCompute(self, expr):
        @cache
        def helper(start, end):
            ans = []
            num = 0
            flag = False
            for i in range(start, end):
                c = expr[i]
                if c.isdigit():
                    num = num * 10 + int(c)
                else:
                    flag = True
                    l = helper(start, i)
                    r = helper(i + 1, end)
                    for left in l:
                        for right in r:
                            if c == '+':
                                ans.append(left + right)
                            elif c == '-':
                                ans.append(left - right)
                            elif c == '*':
                                ans.append(left * right)
                    num = 0
            if not flag:
                ans.append(num)
            return tuple(ans)

        return list(helper(0, len(expr))