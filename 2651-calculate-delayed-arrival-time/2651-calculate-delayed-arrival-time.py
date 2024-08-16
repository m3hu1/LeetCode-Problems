class Solution:
    def findDelayedArrivalTime(self, at: int, dt: int) -> int:
        SUM = at + dt
        
        if SUM == 24:
            return 0

        return SUM if SUM < 24 else SUM - dt