func minimumRecolors(blocks string, k int) int {
	ans := int(1e9)

	for i := range len(blocks) - (k - 1) {
		w := 0
		for j := i; j - i < k; j++ {
			if blocks[j] == 'W' {
				w += 1
			}
		}
		if w < ans {
			ans = w
		}
	}

	return ans
}