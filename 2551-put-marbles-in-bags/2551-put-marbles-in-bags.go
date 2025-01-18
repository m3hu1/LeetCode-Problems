type long = int64

func putMarbles(w []int, k int) int64 {
    ans := long(0)
	arr := make([]int, len(w) - 1)

	for i := 0; i < len(w) - 1; i++ {
		arr[i] = w[i] + w[i + 1]
	}

	sort.Ints(arr)

	for i := 0; i < k - 1; i++ {
		ans += long(arr[len(w) - 2 - i]) - long(arr[i])
	}

	return ans
}