class MyCircularDeque:

    def __init__(self, k: int):
        self.k = 
        self.deque = [0 for _ in range(k)]
        self.front = self.back = self.sz = 0

    def insertFront(self, value: int) -> bool:
        if self.sz == self.k:
            return False
        
        self.front = (self.front - 1 + self.k) % self.k
        self.deque[self.front] = value
        self.sz += 1

        return True

    def insertLast(self, value: int) -> bool:
        if self.sz == self.k:
            return False
        
        self.deque[self.back] = value
        self.back = (self.back + 1) % self.k
        self.sz += 1

        return True

    def deleteFront(self) -> bool:
        if self.sz == 0:
            return False
        
        self.front = (self.front + 1) % self.k
        self.sz -= 1
        
        return True

    def deleteLast(self) -> bool:
        if self.sz == 0:
            return False
        
        self.back = (self.back - 1 + self.k) % self.k
        self.sz -= 1

        return True

    def getFront(self) -> int:
        if self.sz == 0:
            return -1
        
        return self.deque[self.front]

    def getRear(self) -> int:
        if self.sz == 0:
            return -1
        
        return self.deque[(self.back - 1 + self.k) % self.k]

    def isEmpty(self) -> bool:
        return self.sz == 0

    def isFull(self) -> bool:
        return self.k == self.sz


# Your MyCircularDeque object will be instantiated and called as such:
# obj = MyCircularDeque(k)
# param_1 = obj.insertFront(value)
# param_2 = obj.insertLast(value)
# param_3 = obj.deleteFront()
# param_4 = obj.deleteLast()
# param_5 = obj.getFront()
# param_6 = obj.getRear()
# param_7 = obj.isEmpty()
# param_8 = obj.isFull()