type long = int64

func countBadPairs(nums []int) long {
    n := len(nums)
	mp := make(map[int]int64)
	x := long(0)

	for i, e := range nums {
		x += mp[e - i]
		mp[e - i]++
	}

	return long(n * (n - 1) / 2) - x
}