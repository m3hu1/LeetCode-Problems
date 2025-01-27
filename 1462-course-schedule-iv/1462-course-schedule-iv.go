func checkIfPrerequisite(nc int, pr [][]int, qs [][]int) []bool {
	a := make(map[int][]int)

	for i := 0; i < nc; i++ {
		a[i] = []int{}
	}

	for _, e := range pr {
		a[e[0]] = append(a[e[0]], e[1])
	}

	var check func(vis []bool, src, t int) bool
	check = func(vis []bool, src, t int) bool {
		if src == t {
			return true
		}
		vis[src] = true
		for _, nei := range a[src] {
			if !vis[nei] {
				if check(vis, nei, t) {
					return true
				}
			}
		}
		return false
	}

	ans := make([]bool, len(qs))

	for i, q := range qs {
		vis := make([]bool, nc)
		ans[i] = check(vis, q[0], q[1])
	}

	return ans
}