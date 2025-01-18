func minCost(a [][]int) int {
	r, c := len(a), len(a[0])
	d := map[int][2]int{
		1: {0, 1},
		2: {0, -1},
		3: {1, 0},
		4: {-1, 0},
	}
	q := [][3]int{{0, 0, 0}}
	v := make(map[[2]int]bool)

	for len(q) > 0 {
		x, y, z := q[0][0], q[0][1], q[0][2]
		q = q[1:]
		if y == r-1 && z == c-1 {
			return x
		}
		if v[[2]int{y, z}] {
			continue
		}
		v[[2]int{y, z}] = true
		for k, m := range d {
			nr, nc := y+m[0], z+m[1]
			if nr >= 0 && nc >= 0 && nr < r && nc < c && !v[[2]int{nr, nc}] {
				if k == a[y][z] {
					q = append([][3]int{{x, nr, nc}}, q...)
				} else {
					q = append(q, [3]int{x + 1, nr, nc})
				}
			}
		}
	}

	return -1
}