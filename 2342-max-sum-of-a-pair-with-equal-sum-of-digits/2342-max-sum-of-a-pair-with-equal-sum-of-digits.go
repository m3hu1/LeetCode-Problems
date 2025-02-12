func maximumSum(nums []int) int {
	mp := make(map[int]int)
	ans := -1

	for _, num := range nums {
		x, ds := num, 0
		for x > 0 {
			ds += x % 10
			x /= 10
		}
		if ele, found := mp[ds]; found {
			if ele + num > ans {
				ans = ele + num
			}
		}
		if num > mp[ds] {
			mp[ds] = num
		}
	}

	return ans
}