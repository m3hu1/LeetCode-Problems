class Solution:
    def countTestedDevices(self, bp: List[int]) -> int:
        ans = 0
        dec = 0

        for i in range(len(bp)):
            bp[i] -= dec
            if bp[i] > 0:
                dec += 1
                ans += 1
        
        return ans