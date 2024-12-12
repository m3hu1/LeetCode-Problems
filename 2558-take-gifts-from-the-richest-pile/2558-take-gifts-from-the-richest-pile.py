class Solution:
    def pickGifts(self, g: List[int], k: int) -> int:
        g = [-i for i in g]
        heapify(g)

        while k > 0:
            val = -1 * heappop(g)
            heappush(g, -1 * floor(sqrt(val)))
            k -= 1
        
        return -1 * sum(g)