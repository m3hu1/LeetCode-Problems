func numRabbits(answers []int) int {
	mp := map[int]int{}
	for _, ans := range answers {
		mp[ans]++
	}

	ans := 0

	for k, cnt := range mp {
		r := cnt / (k + 1)
		ans += r * (k + 1)

		if 0 != cnt%(k+1) {
			ans += (k + 1)
		}
	}

	return ans
}