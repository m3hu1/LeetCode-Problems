class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        rows = len(matrix)
        cols = len(matrix[0])
        maxis = []
        minis = []

        for i in range(rows):
            minis.append(min(matrix[i]))
        
        for j in range(cols):
            max_col = matrix[0][j]
            for i in range(1, rows):
                max_col = max(max_col, matrix[i][j])
            maxis.append(max_col)
        # print(maxis)
        
        ans = [

        for i in range(rows):
            for j in range(cols):
                if matrix[i][j] == minis[i] and matrix[i][j] == maxis[j]:
                    # return matrix[i][j]
                    ans.append(matrix[i][j])
        
        return ans