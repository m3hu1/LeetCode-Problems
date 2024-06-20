class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        max_heap = [-1 * i for i in stones]
        heapq.heapify(max_heap)

        while len(max_heap) > 1:
            a = heapq.heappop(max_heap) # largest
            b = heapq.heappop(max_heap) # second largest
            if b > a:
                heapq.heappush(max_heap, a - b)

        max_heap.append(0) # out of bound error
        
        return abs(max_heap[0]) # stones = [1]