func numberOfArrays(dx []int, l int, u int) int {
	mini, maxi := l, 

	for i := range dx {
		if dx[i] > 0 {
			if mini+dx[i] > u { return 0 }
			mini += dx[i]
			maxi = min(u, maxi+dx[i])
		} else if dx[i] < 0 {
			if maxi+dx[i] < l { return 0 }
			maxi += dx[i]
			mini = max(mini+dx[i], l)
		}
	}

	return 1 + maxi - mini
}