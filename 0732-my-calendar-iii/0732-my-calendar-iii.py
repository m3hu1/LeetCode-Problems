class MyCalendarThree:

    def __init__(self):
        self.arr = []
    
    def helper(self, arr):
        # 10, 40 ... 5, 15 ... 5, 10
        s = sorted([x[0] for x in arr])
        e = sorted([x[1] for x in arr])
        ans = 0

        for i in range(len(s)):
            ans += 1
            if e[0] <= s[i]:
                ans -= 1
                e.pop(0)
        
        return ans

    def book(self, st: int, et: int) -> int:
        self.arr.append([st, et])
        return self.helper(self.arr)


# Your MyCalendarThree object will be instantiated and called as such:
# obj = MyCalendarThree()
# param_1 = obj.book(startTime,endTime)