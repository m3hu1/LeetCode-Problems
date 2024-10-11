class Solution:
    def smallestChair(self, times: List[List[int]], t: int) -> int:
        times = [(a[0], a[1], i) for i, a in enumerate(times)]
        times.sort()
        occupied = []
        available = []

        for s, e, idx in times:
            while occupied and occupied[0][0] <= s:
                heapq.heappush(available, heapq.heappop(occupied)[1])
            seat = len(occupied)
            if available:
                seat = heapq.heappop(available)
            if idx == t:
                return seat
            else:
                heapq.heappush(occupied, (e, seat))

        return 