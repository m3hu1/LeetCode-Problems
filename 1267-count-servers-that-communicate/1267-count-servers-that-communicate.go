func countServers(grid [][]int) int {
    m, n := len(grid), len(grid[0])
    ans := 0
    rc, cc := make([]int, m), make([]int, n)
    var p [][]int

    for i := 0; i < m; i++ {
        for j := 0; j < n; j++ {
            if grid[i][j] == 1 {
                rc[i]++
                cc[j]++
                p = append(p, []int{i, j})
            }
        }
    }

    for _, p_ := range p {
        i, j := p_[0], p_[1]
        if rc[i] > 1 || cc[j] > 1 {
            ans++
        }
    }

    return ans
}