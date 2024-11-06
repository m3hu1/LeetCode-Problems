class SubrectangleQueries:

    def __init__(self, rect: List[List[int]]):
        self.rect = rect

    def updateSubrectangle(self, r1: int, c1: int, r2: int, c2: int, val: int) -> None:
        for i in range(r1, r2 + 1):
            for j in range(c1, c2 + 1):
                self.rect[i][j] = val

    def getValue(self, r: int, c: int) -> int:
        return self.rect[r][c]


# Your SubrectangleQueries object will be instantiated and called as such:
# obj = SubrectangleQueries(rectangle)
# obj.updateSubrectangle(row1,col1,row2,col2,newValue)
# param_2 = obj.getValue(row,col)