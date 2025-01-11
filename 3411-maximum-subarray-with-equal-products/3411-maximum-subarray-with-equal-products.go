func maxLength(nums []int) int {
    l := 0
    p := 1
	sz := 2

	gcd := func(a, b int) int {
		for b != 0 {
			a, b = b, a % b
		}
		return a
	}

	for r := 0; r < len(nums); r++ {
		for gcd(p, nums[r]) != 1 {
			p /= nums[l]
			l++
		}
		if r - l + 1 > sz {
			sz = r - l + 1
		}
		p *= nums[r]
	}

	return sz
}