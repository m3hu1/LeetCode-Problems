class Solution:
    def dayOfYear(self, date: str) -> int:
        ans = 0
        temp = date.split('-')
        y, m, d = int(temp[0]), int(temp[1]), int(temp[2])
        days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        
        for i in range(m - 1):
            ans += days[i]
        
        if (y % 400 == 0) or (y % 100 != 0) and (y % 4 == 0):
            if m >= 3:
                ans += 1

        return ans + d