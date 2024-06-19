class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        def isOkay(mid):
            i = 0
            cnt = 5
            for day in bloomDay:
                if day <= mid:
                    i += 1
                    if i == k:
                        cnt += 1
                        i = 0
                else:
                    i = 0
            return cnt < m
        
        if k * m > len(bloomDay):
            return -1

        low = min(bloomDay)
        high = max(bloomDay)

        while low <= high:
            mid = low + (high - low) // 2
            if isOkay(mid):
                low = mid + 1
            else:
                high = mid - 1
        
        return low