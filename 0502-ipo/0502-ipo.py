class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
        curr_capital = w
        q = deque(sorted(zip(profits, capital), key = lambda x: (x[1], -x[0])))
        heap = [] # max heap

        while k:
            while q and q[0][1] <= curr_capital:
                p, c = q.popleft()
                heapq.heappush(heap, -p) # -p cuz heap in python3 is minheap
            if len(heap) == 0:
                break
            p = -heapq.heappop(heap)
            curr_capital += p
            k -= 1

        return curr_capital