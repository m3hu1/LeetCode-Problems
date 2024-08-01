class Solution:
    def countSeniors(self, details: List[str]) -> int:
        ans = 0

        for ch in details:
            if int(ch[11 : 13]) > 60:
                ans += 1
        
        return ans