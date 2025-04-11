func check(num string) bool {
	x := []rune(num)
	a, b := 0, 0
	for i := 0; i < len(num); i++ {
		if i < len(num)/2 {
			a += int(x[i] - '0')
		} else {
			b += int(x[i] - '0')
		}
	}
	return a == b
}

func countSymmetricIntegers(low int, high int) int {
	ans := 0

	for i := low; i <= high; i++ {
		x := strconv.Itoa(i)
		if len(x)%2 == 0 && check(x) { ans++ }
	}

	return ans
}