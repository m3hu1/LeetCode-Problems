func clearDigits(s string) string {
	st := []rune{}

	for _, v := range s {
		if '0' <= v && v <= '9' {
			st = st[:len(st) - 1]
			continue
		}
		st = append(st, v)
	}

	return string(st)
}