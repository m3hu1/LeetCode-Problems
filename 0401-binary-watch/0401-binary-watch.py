class Solution:
    def readBinaryWatch(self, turnedOn: int) -> List[str]:
        ans = []

        for hour in range(12):
            for minute in range(60):
                m, h = bin(minute), bin(hour)
                m1, h1 = m.count('1'), h.count('1')
                if m1 + h1 == turnedOn:
                    ans.append(str(hour) + ':' + str(minute).zfill(2))
        
        return ans