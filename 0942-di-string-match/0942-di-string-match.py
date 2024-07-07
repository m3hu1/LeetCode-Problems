class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        ans = []
        num1 = len(s)
        num2 = 0

        for idx, ch in enumerate(s):
            if ch == 'D':
                ans.append(num1)
                num1 -= 1
            else:
                ans.append(num2)
                num2 += 1
        
        ans.append(num1)
            
        return ans