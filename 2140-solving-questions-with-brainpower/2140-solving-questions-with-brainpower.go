func mostPoints(arr [][]int) int64 {
	ans, prev := make([]int, len(arr)), 0

	for i := len(arr) - 1; i >= 0; i-- {
		x := arr[i]
		p, s := x[0], x[1]
		pp := 0
		if i+s+1 < len(arr) {
			pp = ans[i+s+1]
		}
		if p+pp > prev {
			prev = p + pp
		}
		ans[i] = prev
	}

	return int64(ans[0])
}