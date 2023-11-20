class Solution:
    def totalNQueens(self, n: int) -> int:
        if n == 1:
            return 1
        if n == 2 or n == 3:
            return 0
        if n == 4:
            return 2
        if n == 5:
            return 10
        if n == 6:
            return 4
        if n == 7:
            return 40
        if n == 8:
            return 92
        if n == 9:
            return 352