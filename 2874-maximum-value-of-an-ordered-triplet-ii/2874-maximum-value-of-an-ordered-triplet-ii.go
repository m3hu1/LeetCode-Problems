func maximumTripletValue(nums []int) int64 {
	var ans, a, b int64 = 0, 0, 0

	for i := 0; i < len(nums); i++ {
		ans = max(ans, b*int64(nums[i]))
		b = max(b, a-int64(nums[i]))
		a = max(a, int64(nums[i]))
	}

	return ans
}