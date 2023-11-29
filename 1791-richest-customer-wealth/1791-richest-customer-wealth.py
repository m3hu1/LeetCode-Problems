# m3hu1
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxx = 0
        for i in accounts:
            ans = sum(i)
            maxx = max(ans,maxx)
        return maxx       