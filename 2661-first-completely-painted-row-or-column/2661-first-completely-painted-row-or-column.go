func firstCompleteIndex(arr []int, mat [][]int) int {
	m, n := len(mat), len(mat[0])

	mp := make(map[int][2]int)

	for r := 0; r < m; r++ {
		for c := 0; c < n; c++ {
			mp[mat[r][c]] = [2]int{r, c}
		}
	}

	rows := make([]int, m)
	cols := make([]int, n)

	for i := 0; i < len(arr); i++ {
        pos := mp[arr[i]]
		r, c := pos[0], pos[1]
		rows[r]++
		cols[c]++
		if rows[r] == n || cols[c] == m {
			return i
		}
	}

	return -1
}