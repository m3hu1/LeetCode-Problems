func maximumTripletValue(nums []int) int64 {
	var ans, b, a int64 = 0, 0, 0

	for i := 0; i < len(nums); i++ {
		ans = max(ans, a*int64(nums[i]))
		a = max(a, b-int64(nums[i]))
		b = max(b, int64(nums[i]))
	}

	return ans
}