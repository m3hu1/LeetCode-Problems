func constructDistancedSequence(n int) []int {
    sz := 2 * n - 1
    ans, vis := make([]int, sz), make([]bool, n + 1)

    var bt func(idx int) bool
    bt = func(idx int) bool {
        if sz == idx {
            return true
        }
        if ans[idx] != 0 {
            return bt(idx + 1)
        }
        for i := n; i > 0; i-- {
            if vis[i] {
                continue
            }
            if i == 1 {
                vis[i] = true
                ans[idx] = i
                if bt(idx + 1) {
                    return true
                }
                vis[i] = false
                ans[idx] = 0
                continue
            }
            if idx + i >= sz || ans[idx + i] != 0 {
                continue
            }
            vis[i] = true
            ans[idx] = i
            ans[idx + i] = i
            if bt(idx + 1) {
                return true
            }
            vis[i] = false
            ans[idx] = 0
            ans[idx + i] = 0
        }
        return false
    }

    bt(0)

    return ans
}