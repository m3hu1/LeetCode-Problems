func putMarbles(ws []int, k int) int64 {
    n := len(ws)
	if k == 1 {
		return 0
	}

	ps := make([]int, n-1)
	for i := 0; i < n-1; i++ {
		ps[i] = ws[i] + ws[i+1]
	}
	sort.Ints(ps)

	var mini, maxi int64 = 0, 0

	for i := 0; i < k-1; i++ {
		mini += int64(ps[i])
		maxi += int64(ps[n-2-i])
	}

	return maxi - mini
}