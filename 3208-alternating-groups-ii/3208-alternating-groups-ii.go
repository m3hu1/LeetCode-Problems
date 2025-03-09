func numberOfAlternatingGroups(c []int, k int) int {
	var l, r int = 0, 0
	var ans int = 0

	for l < len(c) {
		r++
		if c[r%len(c)] == c[(r-1)%len(c)] {
			l = r
		} else if r-l+1 == k {
			l++
			ans++
		}
	}

	return ans
}