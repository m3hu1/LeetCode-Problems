class Solution:
    def minGroups(self, ii: List[List[int]]) -> int:
        ii.sort()
        heap = []

        for i in ii:
            if not heap or i[0] <= heap[0]:
                heappush(heap, i[1])
            else:
                heappop(heap)
                heappush(heap, i[1])
        
        return len(heap)