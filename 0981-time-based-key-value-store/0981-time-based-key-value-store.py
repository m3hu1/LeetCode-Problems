class TimeMap:

    def __init__(self):
        self.store = defaultdict(list)

    def set(self, key: str, value: str, timestamp: int) -> None:
        self.store[key].append([value, timestamp])

    def get(self, key: str, timestamp: int) -> str:
        data = self.store.get(key, [])
        low = 0
        high = len(data) - 1
        ans = ""

        while low <= high:
            mid = low + (high - low) // 2
            if data[mid][1] <= timestamp:
                ans = data[mid][0]
                low = mid + 1
            else:
                high = mid - 1
            
        return ans

# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)