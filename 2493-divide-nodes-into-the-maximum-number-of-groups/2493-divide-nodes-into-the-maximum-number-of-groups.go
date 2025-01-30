func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

func magnificentSets(n int, es [][]int) int {
	ans := 0
	g := make([][]int, n)

	for _, e := range es {
		a, b := e[0]-1, e[1]-1
		g[a] = append(g[a], b)
		g[b] = append(g[b], a)
	}

	dp := make([]int, n)

	for s := range dp {
		q := []int{s}
		dt := make([]int, n)
		dt[s] = 1
		md, root := 1, s
		for len(q) > 0 {
			node := q[0]
			q = q[1:]
			root = min(root, node)
			for _, nei := range g[node] {
				if dt[nei] == 0 {
					dt[nei] = dt[node] + 1
					md = max(md, dt[nei])
					q = append(q, nei)
				} else if abs(dt[nei]-dt[node]) != 1 {
					return -1
				}
			}
		}
		dp[root] = max(dp[root], md)
	}

	for _, v := range dp {
		ans += v
	}

	return ans
}
