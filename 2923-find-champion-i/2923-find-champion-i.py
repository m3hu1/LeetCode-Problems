class Solution:
    def findChampion(self, grid: List[List[int]]) -> int:
        mp = defaultdict(int)

        for i in range(len(grid)):
            for j in range(len(grid)):
                if grid[i][j] == 1:
                    mp[i] += 1

        maxi = max(mp.values())   

        for i, j in mp.items():
            if j == maxi:
                return i