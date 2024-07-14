class Solution:
    def countOfAtoms(self, f: str) -> str:
        stack = [1]
        mp, i = defaultdict(int), len(f) - 1
        
        while i >= 0:
            temp = ''
            while i >= 0 and f[i].isdigit():
                temp = f[i] + temp
                i -= 1
            if temp:
                digit = int(temp)
            else:
                digit = 0
            if i >= 0 and f[i] == ')':
                i -= 1
                stack.append(stack[-1] * max(1, digit))
            elif i >= 0 and f[i] == '(':
                i -= 1
                stack.pop()
            else:
                curr = ''
                while i >= 0 and f[i].islower():
                    curr = f[i] + curr
                    i -= 1
                if i >= 0 and f[i].isupper():
                    curr = f[i] + curr
                    i -= 1
                mp[curr] += stack[-1] * max(1, digit)

        ans = ''

        for curr in sorted(mp.keys()):
            ans = ans + curr
            if mp[curr] != 1:
                ans += str(mp[curr])

        return an