class Solution:
    def construct2DArray(self, arr: List[int], m: int, n: int) -> List[List[int]]:
        if len(arr) != m * n:
            return []
        
        # mat = [[0 for _ in range(n)] for _ in range(m)]
        mat = []
        x = 0

        for i in range(m):
            temp = []
            for j in range(n):
                temp.append(arr[x])
                x += 1
            mat.append(temp)
        
        return mat