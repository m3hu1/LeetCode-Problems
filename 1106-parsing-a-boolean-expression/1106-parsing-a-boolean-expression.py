class Solution:
    def parseBoolExpr(self, expr: str) -> bool:
        t = f = 0
        o, o_ = [], []

        for i in expr:
            if i in "|&!":
                o.append(i)
                o_.append([t, f])
                t = f = 0
            elif i == 't':
                t += 1
            elif i == 'f':
                f += 1
            elif i == ')':
                temp = o.pop()
                if temp == '!':
                    t, f = f, t
                elif temp == '&':
                    t = 1 if t > 0 and f == 0 else 0
                    f = 1 - t
                elif temp == '|':
                    t = 1 if t > 0 else 0
                    f = 1 - t
                t_, f_ = o_.pop()
                t = t + t_
                f = f + f_
        
        return t > 0