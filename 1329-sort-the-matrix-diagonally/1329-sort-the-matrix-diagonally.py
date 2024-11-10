class Solution:
    def diagonalSort(self, grid: List[List[int]]) -> List[List[int]]:
        mp = defaultdict(list)

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                x = i - j
                mp[x].append(grid[i][j])
    
        for key in mp.keys():
            mp[key].sort()

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                x = i - j
                grid[i][j] = mp[x].pop(0)

        return grid