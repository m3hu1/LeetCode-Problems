class Solution:
    def nthSuperUglyNumber(self, n: int, primes: List[int]) -> int:
        min_heap = [] # similar to ugly number 2 approach
        min_heap.append(1) # first ugly number
        vis = {1} # 1 already visited
        curr = 0

        for i in range(n):
            curr = heapq.heappop(min_heap)
            for prime in primes:
                new = curr * prime
                if new not in vis:
                    vis.add(new)
                    heapq.heappush(min_heap, new)
        
        return curr