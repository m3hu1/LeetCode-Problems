class Solution:
    def maximumUnits(self, bt: List[List[int]], ts: int) -> int:
        bt.sort(reverse = True, key = lambda x: x[1]) #sort acc to no. of units/box
        ans = 0

        for i in bt:
            if ts <= 0:
                return ans
            ans += min(ts, i[0]) * i[1]
            ts -= i[0]
        
        return ans