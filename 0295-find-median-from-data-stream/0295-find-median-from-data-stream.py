class MedianFinder:

    def __init__(self):
        self.top = []
        self.bottom = []

    def addNum(self, num: int) -> None:
        heapq.heappush(self.bottom, -1 * num)
        heapq.heappush(self.top, -1 * heapq.heappop(self.bottom))

        if len(self.top) > len(self.bottom):
            heapq.heappush(self.bottom, -1 * heapq.heappop(self.top))

    def findMedian(self) -> float:
        if len(self.bottom) == len(self.top):
            return (self.top[0] - self.bottom[0]) / 2

        return -1 * self.bottom[0]
        
# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()