class Solution:
    def nthUglyNumber(self, n: int) -> int:
        min_heap = [] # generating ugly numbers in ascending order using min heap
        min_heap.append(1) # first ugly number
        vis = {1} # 1 already visited
        factors = [2, 3, 5]
        curr_ugly = 0

        for i in range(n):
            curr_ugly = heapq.heappop(min_heap)
            for num in factors:
                new = curr_ugly * num
                if new not in vis:
                    vis.add(new)
                    heapq.heappush(min_heap, new)
        
        return curr_ugly