class Solution:
    def maxTwoEvents(self, ev: List[List[int]]) -> int:
        # ev.sort(key = lambda x: x[1])
        ev.sort()
        h = []
        ans = maxi = float('-inf')

        for s, e, val in ev:
            while h and s > h[0][0]:
                _, x = heappop(h)
                maxi = max(maxi, x)
            ans = max(ans, maxi + val)
            heappush(h, (e, val))
        
        while h:
            _, x = heappop(h)
            ans = max(ans, x)
        
        return ans