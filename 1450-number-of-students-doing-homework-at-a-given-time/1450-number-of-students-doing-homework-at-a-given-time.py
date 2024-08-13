class Solution:
    def busyStudent(self, st: List[int], et: List[int], qt: int) -> int:
        ans = 0
        arr = list(zip(st, et))

        for temp in arr:
            if temp[0] <= qt and qt <= temp[1]:
                ans += 1
        
        return ans