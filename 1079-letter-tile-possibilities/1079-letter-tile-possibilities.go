func helper(arr [26]int) int {
	ans := 0
	for i := range arr {
		if arr[i] > 0 {
			ans++
			arr[i]--
			ans += helper(arr)
			arr[i]++
		}
	}
	return ans
}

func numTilePossibilities(t string) int {
	arr := [26]int{}

	for i := range t {
		arr[t[i] - 'A']++
	}

	return helper(arr)
}