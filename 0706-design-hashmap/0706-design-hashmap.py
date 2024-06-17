class MyHashMap:

    def __init__(self):
        self.hashmap = [None] * (int(1e6) + 2)

    def put(self, key: int, value: int) -> None:
        self.hashmap[key] = value

    def get(self, key: int) -> int:
        if self.hashmap[key] is None:
            return -1

        return self.hashmap[key]

    def remove(self, key: int) -> None:
        self.hashmap[key] = None


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)