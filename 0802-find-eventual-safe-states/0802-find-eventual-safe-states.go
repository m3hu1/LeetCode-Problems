func eventualSafeNodes(g [][]int) []int {
    s := make([]int, len(g))

    var dfs func(int) bool
    dfs = func(node int) bool {
        if s[node] > 0 {
            return s[node] == 2
        }
        s[node] = 1
        for _, nei := range g[node] {
            if !dfs(nei) {
                return false
            }
        }
        s[node] = 2
        return true
    }

    ans := make([]int, 0)

    for i := range len(g) {
        if dfs(i) {
            ans = append(ans, i)
        }
    }

    return ans
}