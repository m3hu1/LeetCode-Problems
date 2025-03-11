func numberOfSubstrings(s string) int {
	lastPos := []int{-1, -1, -1}
	total := 0

	for pos, char := range s {
		lastPos[char-'a'] = pos
		total += 1 + min(lastPos[0], lastPos[1], lastPos[2])
	}

	return total
}