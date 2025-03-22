func countCompleteComponents(n int, edges [][]int) int {
	g := make([][]int, n)
	for _, e := range edges {
		u, v := e[0], e[1]
		g[u] = append(g[u], v)
		g[v] = append(g[v], u)
    }

	vis := make([]bool, n)
	cnt := 0

	for i := 0; i < n; i++ {
		if vis[i] {
			continue
		}
		arr := []int{}
		ec := 0
		var dfs func(int)
		dfs = func(u int) {
			vis[u] = true
			arr = append(arr, u)
			for _, v := range g[u] {
				ec++
				if !vis[v] {
					dfs(v)
				}
			}
		}
		dfs(i)
		ec /= 2
		v := len(arr)
		if ec == v*(v-1)/2 {
			cnt++
		}
	}

	return cnt
}