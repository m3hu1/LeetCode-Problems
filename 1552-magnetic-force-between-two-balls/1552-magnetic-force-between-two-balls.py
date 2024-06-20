class Solution:
    def maxDistance(self, pos: List[int], m: int) -> int:
        def isOK(mid, balls) -> bool:
            cnt = 1
            last = pos[0]
            for i in range(len(pos)):
                if pos[i] - last >= mid:
                    cnt += 1
                    last = pos[i]
                if cnt >= balls:
                    return True
            return False

        pos.sort()
        low = 0
        high = pos[len(pos) - 1] - pos[0]
        ans = 0

        while low <= high:
            mid = low + (high - low) // 2
            if isOK(mid, m):
                ans = mid
                low = mid + 1
            else:
                high = mid - 1
        
        return ans