func findMaxFish(grid [][]int) int {
    m, n := len(grid), len(grid[0])

    vis := make([][]bool, m)
    for i := range vis {
        vis[i] = make([]bool, n)
    }
    
    var ds = []struct{dx, dy int}{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}

    var dfs func(r, c int) int
    dfs = func(r, c int) int {
        if r < 0 || c < 0 || r >= m || c >= n || vis[r][c] || grid[r][c] == 0 {
            return 0
        }
        vis[r][c] = true
        fc := grid[r][c]
        for _, dir := range ds {
            fc += dfs(r + dir.dx, c + dir.dy)
        }
        return fc
    }

    ans := 0
    
    for r := 0; r < m; r++ {
        for c := 0; c < n; c++ {
            if grid[r][c] > 0 && !vis[r][c] {
                ans = max(ans, dfs(r, c))
            }
        }
    }
    
    return ans
}