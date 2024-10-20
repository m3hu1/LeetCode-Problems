class Solution:
    def stringSequence(self, target: str) -> List[str]:
        s = []
        ans = []
        
        for ch in target:
            s.append('a')
            ans.append("".join(s))
            while s[-1] != ch:
                if s[-1] == 'z':
                    s[-1] = 'a'
                else:
                    s[-1] = chr(ord(s[-1]) + 1)
                ans.append("".join(s))
        
        return ans