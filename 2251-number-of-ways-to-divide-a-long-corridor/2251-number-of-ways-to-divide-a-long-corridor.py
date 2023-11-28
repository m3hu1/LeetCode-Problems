# m3hu1
class Solution:
    def numberOfWays(self, corridor: str) -> int:
        mod = 10 ** 9 + 7
        corridor += 'P'
        twoSeatCounter = 0
        res = 1
        prevSeatSetFoundAt = -1
        seatCount = 0
        for id, char in enumerate(corridor):
            if char == 'S':
                seatCount += 1
                if twoSeatCounter == 0 and prevSeatSetFoundAt > 0:
                    res *= (id - prevSeatSetFoundAt) % mod
                twoSeatCounter += 1
            if twoSeatCounter == 2:
                twoSeatCounter = 0
                prevSeatSetFoundAt = id
        if seatCount & 1 or seatCount == 0: return 0
        return res % mod