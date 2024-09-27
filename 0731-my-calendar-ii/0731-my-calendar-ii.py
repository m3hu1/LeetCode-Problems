class MyCalendarTwo:

    def __init__(self):
        self.b = SortedList()
        self.o = SortedList()

    def book(self, start: int, end: int) -> bool:
        for a, b in self.o:
            if max(start, a) < min(end, b):
                return False
        for a, b in self.b:
            if max(start, a) < min(end, b):
                self.o.add((max(start, a), min(end, b)))
        
        self.b.add((start, end))
        
        return True

# Your MyCalendarTwo object will be instantiated and called as such:
# obj = MyCalendarTwo()
# param_1 = obj.book(start,end)