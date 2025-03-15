func minCapability(nums []int, k int) int {
	l, r := 1, int(1e9)

	for l <= r {
		m := (l+r) >> 1
		x := 0
		for i := 0; i < len(nums); {
			if nums[i] <= m {
				i += 2
				x++
				if x >= k {
					break
				}
			} else {
				i++
			}
		}
		if x >= k {
			r = m - 1
		} else {
			l = m + 1
		}
	}

	return r + 1
}