func maximumInvitations(f []int) int {
	n := len(f)
	id := make([]int, n)

	for i := 0; i < n; i++ {
		j := f[i]
		id[j]++
	}

	var q []int

	for i := 0; i < n; i++ {
		if id[i] == 0 {
			q = append(q, i)
		}
	}

	dp := make([]int, n)

	var i int
	for len(q) != 0 {
		i, q = q[0], q[1:]
		j := f[i]
		dp[j] = max(dp[j], dp[i]+1)
		id[j]--
		if id[j] == 0 {
			q = append(q, j)
		}
	}

	ans, ex := 0, 0

	for i = 0; i < n; i++ {
		if id[i] != 0 {
			l := 0
			for j := i; id[j] > 0; j = f[j] {
				id[j] = 0
				l++
			}
			if l == 2 {
				ex += 2 + dp[i] + dp[f[i]]
			} else {
				ans = max(ans, l)
			}
		}
	}

	return max(ans, ex)
}