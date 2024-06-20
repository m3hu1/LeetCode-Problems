class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        min_heap = []

        for xi, yi in points:
            dist = pow(xi, 2) + pow(yi, 2)
            min_heap.append((dist, xi, yi))

        heapq.heapify(min_heap)
        ans = []

        for i in range(k):
            a, b, c = heapq.heappop(min_heap)
            ans.append((b, c))

        return ans