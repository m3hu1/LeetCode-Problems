func highestPeak(iw [][]int) [][]int {
    n, m := len(iw), len(iw[0])
	dirn := [][2]int{{-1, 0}, {1, 0}, {0, -1}, {0, 1}}
	q := make([][2]int, 0)
	ans := make([][]int, n)

	for i := range iw {
		ans[i] = make([]int, m)
		for j := range iw[i] {
			if iw[i][j] == 1 {
				q = append(q, [2]int{i, j})
				ans[i][j] = 0
			} else {
				ans[i][j] = -1
			}
		}
	}

	for len(q) > 0 {
		temp := make([][2]int, 0)
		for _, p := range q {
			i, j := p[0], p[1]
			for _, dir := range dirn {
				ii, jj := i+dir[0], j+dir[1]
				if ii >= 0 && ii < n && jj >= 0 && jj < m && ans[ii][jj] == -1 {
					temp = append(temp, [2]int{ii, jj})
					ans[ii][jj] = ans[i][j] + 1
				}
			}
		}
		q = temp
	}

    return ans
}